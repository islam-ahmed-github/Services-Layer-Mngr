#include <stdio.h>
#include <stdlib.h>




#include "MNGR_Sensors.h"



int main()
{

    uint8  _uint8 =0;
    uint32 _uint32 =0;

/*
    printf("\n read LightSwitchState: ");
    MNGR_Sensors_Read(SensorID_DoorState,&_uint8 );
    printf("  LightSwitchState= %d ",_uint8);

    printf("\n\n\n\n");
*/
    //printf("\n read Speed sensor: ");
    MNGR_Sensors_Read(SensorID_DoorState, &_uint32 );
  //  printf("  Speed sensor= %d ",_uint32);

    printf("\n\n\n\n");
    return 0;
}
