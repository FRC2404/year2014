#ifndef _xbox_h_
#define _xbox_h_

#include "WPILib.h"

class xbox
{
public:
	Joystick *stick;
	enum a{
		LeftX = 1,
		LeftY,
		Triggers,
		RightX, 
		RightY
		//DPad  // Not sure about this one, will look into it later.
	};
	
	enum b{
			A = 1,
			B,
			X,
			Y,
			Lb,
			Rb,
			Back,
			Start,
			LeftClick,		// Left Ananlog stick pressed
			RightClick 	// Right Ananlog stick pressed
		};
	
	xbox(int sticknum = 1)
	{
		init();
		stick = new Joystick(sticknum);
	};
	~xbox(){delete stick;};
	
	void init(){stick = NULL;};
	
	bool getButton(int x)
	{
		return stick->GetRawButton(x);
	};
	float getAxis(int x)
	{
		return stick->GetRawAxis(x);
	};
};

#endif
