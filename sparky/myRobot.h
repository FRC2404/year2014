#ifndef _myRobot_h_
#define _myRobot_h_

#include "WPILib.h"
#include "Auton.h"

class myRobot : public SimpleRobot
{
public:

	Victor mFrontLeft;
	Victor mFrontRight;
	Victor mBackLeft;
	Victor mBackRight;
	
	Joystick stick1;
	
	//Auton mrobot;
	
	myRobot();
	~myRobot();
	void OperatorControl();
	void Autonomous();
	void Drive(float, float, float, float);
	void Dashboard();
	
	enum xbox_Buttons{
		kA = 1,
		kB,
		kX,
		kY,
		kLb,
		kRb,
		kBack,
		kStart,
		kLeftClick,		// Left Ananlog stick pressed
		kRightClick 	// Right Ananlog stick pressed
	};
	
	enum xboxAxis{
		kLeftX = 1,
		kLeftY,
		kTriggers,
		kRightX, 
		//kRightY
		//kDPad
	};
};

#endif

