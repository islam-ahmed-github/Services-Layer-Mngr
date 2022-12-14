

#ifndef MNGR_SENSORS_H_
#define MNGR_SENSORS_H_

#include "COMMONS.h"
#include "STD_DATA_TYPES.h"
#include "Errors.h"



typedef enum
{
	SensorID_SpeedSensor, //0
	SensorID_DoorState,  // 1
	SensorID_LightSwitchState //2
	// all other types to be inserted here
}SensorID_t;




ErrorCode_t  MNGR_Sensors_Read(SensorID_t  sid ,  void* data );


#endif
