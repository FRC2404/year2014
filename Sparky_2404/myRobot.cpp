#include "myRobot.h"
#include "WPILib.h"
#include "mylib.h"
#include "Auton.h"
#include "xbox.h"

myRobot::myRobot()
:mFrontLeft(1)
,mFrontRight(2)
,mBackLeft(3)
,mBackRight(4)
//,stick1(1)
,pad(1)
//,mRobot()
{
	
	//Zero them out, to prevent issues ( all motors/shooters )
	mFrontLeft.Set(0.0);
	mFrontRight.Set(0.0);
	mBackLeft.Set(0.0);
	mBackRight.Set(0.0);
	
	SmartDashboard::init();
}

myRobot::~myRobot(void)
{

}

void myRobot::OperatorControl()
{
	GetWatchdog().SetEnabled(true);
	while(IsOperatorControl() && IsEnabled())
	{
		Watchdog().Feed();
		
		float
			//Axis Values, zeroed out /w speed accel.
		x = pad.getAxis(pad.LeftX),
		y = pad.getAxis(pad.LeftY),
		z = pad.getAxis(pad.Triggers),
			fl, fr, bl, br;

		// Still needs to be tested	
		fl = (y + x + z);
		fr = (-y + x - z);
		bl = (y - x + z);
		br = (-y - x - z);
			
		Drive(fl, fr, bl, br);
		Dashboard();
	}
}

void myRobot::Drive(float fl, float fr, float bl, float br)
{
	mFrontLeft.Set(mylib::limit(fl));
	mFrontRight.Set(mylib::limit(fr));
	mBackLeft.Set(mylib::limit(bl));
	mBackRight.Set(mylib::limit(br));
}

void myRobot::Autonomous()
{
	//Autonomous Code Here

}

void myRobot::Dashboard()
{

	SmartDashboard::PutNumber("Battery_Voltage", DriverStation::GetInstance()->GetBatteryVoltage());
	SmartDashboard::PutNumber("Joystick Axis 1", pad.getAxis(pad.LeftX));
	SmartDashboard::PutNumber("Joystick Axis 2", pad.getAxis(pad.LeftY));
	//Used to display values to the Smart Dashboard
}

START_ROBOT_CLASS(myRobot);
