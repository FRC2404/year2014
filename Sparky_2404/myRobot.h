#ifndef _myRobot_h_
#define _myRobot_h_

#include "WPILib.h"
#include "Auton.h"
#include "xbox.h"

class myRobot : public SimpleRobot
{
public:

	Victor mFrontLeft;
	Victor mFrontRight;
	Victor mBackLeft;
	Victor mBackRight;
	
	//Joystick stick1;
	
	xbox pad;
	
	//Auton mrobot;
	
	myRobot();
	~myRobot();
	void OperatorControl();
	void Autonomous();
	void Drive(float, float, float, float);
	void Dashboard();
};

#endif

