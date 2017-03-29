// Stabalized Approach.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Timer.cpp"


int checkHeights() {

}

int checkVelocity() {

}


int main()
{
	Timer timer;
	int height = 0;

	while (height != 0){
		if (timer.getElapsed % 60 == 0) {
			//check the descending fpm is between 700fpm and 1300fpm
			//check velocity is not more than v_ref + 20kts (37.04km/h) 
			//note: v_ref = v_o * 1.3, where v_o is the plane's maximum operating manuevering speed
		}
	}


    return 0;
}

