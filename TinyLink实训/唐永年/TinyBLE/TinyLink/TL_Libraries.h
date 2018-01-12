#ifndef TL_LIBRARIES_H
#define TL_LIBRARIES_H

#include "TL_Config.h"

#ifdef TIME
	#if PLATFORM == 5 && BOARD == 1011
		#if TIME == MBED_TIME
			#include "Mbed_Time_Time_Mbed.h"
		#endif
	#endif
#endif

#ifdef LED
	#if PLATFORM == 5 && BOARD == 1011
		#if LED == MBED_LED
			#include "Mbed_Led_Led_Mbed.h"
		#endif
	#endif
#endif
#ifdef BLUETOOTH
	#if PLATFORM == 5 && BOARD == 1011
		#if BLUETOOTH == MBED_BLUETOOTH
			#include "Mbed_Bluetooth_Bluetooth_Mbed.h"
		#endif
	#endif
#endif
//add by chen sipei
#ifdef GYRO
	#if PLATFORM == 5 && BOARD == 1011
		#if GYRO == MBED_GYRO
			#include "MPU6050_Gyro_Gyro_TinyBLE.h"
		#endif
	#endif
#endif
//add by tang yongnian
#ifdef ACCELERATION 
	#if PLATFORM == 5 && BOARD == 1011
		#if ACCELERATION == MBED_ACCELERATION
			#include "Mbed_MPU6050_Accelerometer_Mbed.h"
		#endif
	#endif
#endif

#endif
