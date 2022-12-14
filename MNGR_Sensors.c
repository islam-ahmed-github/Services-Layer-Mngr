

#include"MNGR_Sensors.h"





/****************************************************************************************************************/

typedef struct
{
	// configuration related  adc and/or gpio
	// sensor specific configuration and attributes
   uint8 sensorid;

}SpeedSensor_t;



typedef struct
{
	// configuration related  adc and/or gpio
	// sensor specific configuration and attributes
   uint8 sensorid;

}DoorSensor_t;



typedef struct
{
	// configuration related  adc and/or gpio
	// sensor specific configuration and attributes
   uint8 sensorid;

}LightSwitchSensor_t;




void SpeedSensor_GetSpeed(const SpeedSensor_t* ssid , uint32* speed )
{

   printf("\n this is SpeedSensor_GetSpeed(), sensor id = %d \n", ssid->sensorid );
   *speed = 220;

}



void DoorSensor_GetState(const DoorSensor_t* dsid , uint8* doorstate )
{

   printf("\n this is DoorSensor_Read(), sensor id = %d \n", dsid->sensorid );
   *doorstate = 0;

}


void LightSwitchSensor_GetState(const LightSwitchSensor_t* lsid , uint8* lightswitchstate )
{

   printf("\n this is LightSwitchSensor_Read(), sensor id = %d \n", lsid->sensorid );
   *lightswitchstate  = 1;

}












typedef struct
{
	SpeedSensor_t SensorConfig;
	void (*handler)(const void* ssid, void* data);

}Sensor_t;


Sensor_t  MNGR_Sensors[]=
 {

	    { /*SpeedSensor_t = */ {10}, SpeedSensor_GetSpeed },  /* SpeedSensor message id =0 */
	    { /*DoorSensor_t = */  {20}, DoorSensor_GetState },   /* DoorState message id =1 */
	    { /*LightSensor_t = */ {30}, LightSwitchSensor_GetState}, /* LightState message id =2 */

 };



ErrorCode_t  MNGR_Sensors_Read(SensorID_t  sid ,  void* data )
{

  MNGR_Sensors[sid].handler( &(MNGR_Sensors[sid].SensorConfig), data  );

  return ErrorCode_OK;

}






