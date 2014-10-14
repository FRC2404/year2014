#ifndef _mylib_h_
#define _mylib_h_

class mylib
{
public:
	static float valSquare(float x)
	{
		if(x  > 0 )
			return (x * x);
		else {
			return (x * x * -1);
		}
	};
	static float setZero(float val, float limit = 0.05)
	{
		if(val < limit && val > -limit)
			return 0;
		
		return val;
	}; 
	
	static float limit(float val)
	{
		if(val > 1)
			return 1;
		if(val < -1)
			return -1;
		
		return val;
	};
};
#endif
