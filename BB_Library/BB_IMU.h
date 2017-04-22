#ifndef BB_IMU_H
#define BB_IMU_H

#include "BB_BOARD.h"
#include "BNO55_I2C_driver.h"
/*******************************************************************************
 * PUBLIC #DEFINES                                                             *
 ******************************************************************************/
 
/******************************************************************************/ 


/*******************************************************************************
 * PUBLIC FUNCTION Typdefs                                                 *
 ******************************************************************************/ 
typedef struct {
  UINT16 Heading;
  UINT16 Roll;
  UINT16 Pitch;
} eAxis;


typedef struct {
   eAxis euler;
   short temp;
   float gdt;            
} IMU_Data;

/*******************************************************************************
 * PUBLIC FUNCTION PROTOTYPES                                                  *
 ******************************************************************************/
BOOL IMU_Init();
BOOL IMU_Get_Calibration();
BOOL IMU_Set_Calibration();
IMU_Data IMU_Get_Euler_Angles();


#endif