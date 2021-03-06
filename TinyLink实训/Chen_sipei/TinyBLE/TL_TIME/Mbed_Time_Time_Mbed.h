#ifndef MBED_TIME_TIME_MBED_H
#define MBED_TIME_TIME_MBED_H

#include <stdio.h>
#include <stdlib.h>
#include "mbed.h"
#include "TL_Config.h"

class Mbed_Time_Time_T
{
	public:
	Mbed_Time_Time_T(){}

	void delayMillis(unsigned long ms);
	void delayMicros(unsigned long us);

	unsigned long millisFromStart();
	unsigned long microsFromStart();		
};

typedef Mbed_Time_Time_T Mbed_Time_Time;
extern Mbed_Time_Time TL_Time;

#endif