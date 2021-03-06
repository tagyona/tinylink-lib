#ifndef TL_LIBRARIES_H
#define TL_LIBRARIES_H

#include "TL_Config.h"

#ifdef SERIAL
	#if SERIAL == ARDUINO_SERIAL
		#include "Arduino_Serial_Serial_Arduino_UNO.h"
	#endif
#endif

#ifdef TIME
	#if TIME == ARDUINO_TIME
		#include "Arduino_Time_Time_Arduino_UNO.h"
	#endif
#endif

#ifdef TIMER
	#if TIMER == ARDUINO_TIMER
		#include "Arduino_Timer_Timer_Arduino_UNO.h"
	#endif
#endif

#ifdef LED
	#if LED == ARDUINO_LED
		#include "Arduino_LED_LED_Arduino_UNO.h"
	#endif
#endif

#ifdef PM25
	#if PM25 == SDS018
		#include "SDS018_PM25_Arduino_UNO.h"
	#endif
#endif

#ifdef BLUETOOTH
	#if BLUETOOTH == DUAL_BLE
		#include "Dual_Ble_Bluetooth_Arduino_UNO.h"
	#endif
#endif

#ifdef GPRS
  // not available
#endif

#ifdef WIFI
	#if WIFI == ESP8266
		#include "ESP8266_WiFi_Arduino_UNO.h"
	#endif
#endif

#ifdef HUMIDITY
	#if HUMIDITY == DHT11
		#include "DHT11_Humidity_Arduino_UNO.h"
	#endif
#endif

#ifdef TEMPERATURE
	#if TEMPERATURE == DHT11
		#include "DHT11_Temperature_Arduino_UNO.h"
	#endif
#endif

#ifdef GPS
	#if GPS == U_BLOX
  		#include "U_BLOX_Arduino_UNO.h"
	#endif
#endif

#ifdef STORAGE
	#if STORAGE == SD_SHIELD
		#include "SD_Shield_Storage_Arduino_UNO.h"
	#endif
#endif

#ifdef LIGHT
	#if LIGHT == GROVE_LIGHT
		#include "Grove_Light_Light_Arduino_UNO.h"
	#endif
#endif

#ifdef SOIL_HUMIDITY
	#if SOIL_HUMIDITY == SOIL_MOISTURE_ANALOG
		#include "Soil_Moisture_Analog_Soil_Humidity_Arduino_UNO.h"
	#endif
#endif

#ifdef SOUND
	// not available
#endif

#ifdef DISPLAY
	#if DISPLAY==GROVE_LCD_RGB
		#include "Grove_LCD_RGB_Display_Arduino_Uno.h"
	#endif
#endif

#ifdef RELAY
	#if RELAY == GROVE_RELAY
		#include "Grove_Relay_Relay_Arduino_Uno.h"
	#endif
#endif

#ifdef ACCELEROMETER
	#if ACCELEROMETER == GROVE_IMU9
		#include "Grove_IMU9_Accelerometer_Arduino_UNO.h"
	#endif
#endif

#ifdef MAGNET
	#if MAGNET == GROVE_IMU9
		#include "Grove_IMU9_Magnet_Arduino_UNO.h"
	#endif
#endif

#ifdef GYRO
	#if GYRO == GROVE_IMU9
		#include "Grove_IMU9_Gyro_Arduino_UNO.h"
	#endif
#endif

//Edit by zyx
#ifdef BUZZER
	#if BUZZER == GROVE_BUZZER
		#include "Grove_Buzzer_Buzzer_Arduino_UNO.h"
	#endif
#endif

#ifdef SERIAL_TO_PARALLEL
	#if SERIAL_TO_PARALLEL == _74HC595
		#include "_74HC595_Arduino_Uno.h"
	#endif
#endif

#ifdef BUTTON
	#if BUTTON == GROVE_BUTTON
		#include "Grove_Button_Button_Arduino_Uno.h"
	#endif
#endif

#ifdef RELAY
	#if RELAY == GROVE_MINI_FAN
		#include "Grove_Mini_Fan_Relay_Arduino_Uno.h"
	#endif
#endif

#ifdef ATOMIZATION
	#if ATOMIZATION == GROVE_WATER
		#include "Grove_Water_Atomization_Arduino_Uno.h"
	#endif
#endif

#ifdef RECORDER
	#if RECORDER == GROVE_RECORDER
		#include "Grove_Recorder_Recorder_Arduino_Uno.h"
	#endif
#endif

#ifdef SPEAKER
	#if SPEAKER == GROVE_SPEAKER
		#include "Grove_Speaker_Speaker_Arduino_Uno.h"
	#endif
#endif

#ifdef SERVO
	#if SERVO == GROVE_SERVO
		#include "Grove_Servo_Servo_Arduino_Uno.h"
	#endif
#endif

#ifdef DMX512
	#if DMX512 == GROVE_DMX512
		#include "Grove_DMX512_DMX512_Arduino_Uno.h"
	#endif
#endif

#ifdef IRREV
	#if IRREV == GROVE_IRREV
		#include "Grove_IRRev_IRRev_Arduino_UNO.h"
	#endif
#endif

#ifdef IRSEND
	#if IRSEND == GROVE_IRSEND
		#include "Grove_IRSend_IRSend_Arduino_UNO.h"
	#endif
#endif

#ifdef RTC
	#if RTC == GROVE_RTC
		#include "Grove_RTC_RTC_Arduino_UNO.h"
	#endif
#endif

#ifdef MP3
	#if MP3 == GROVE_MP3
		#include "Grove_MP3_MP3_Arduino_UNO.h"
	#endif
#endif

#endif
