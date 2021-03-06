/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : SegLCD1.h
**     Project     : ProcessorExpert
**     Processor   : MKL46Z256VMC4
**     Component   : SegLCD_LDD
**     Version     : Component 01.017, Driver 01.06, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-03-21, 23:00, # CodeGen: 10
**     Abstract    :
**         This component "SegLCD_LDD" implements the segment Liquid Crystal Display (SegLCD)
**         driver module. It can drive an LCD which is composed of variable number
**         of frontplanes and backplanes. It can control also current mode of display.
**     Settings    :
**          Component name                                 : SegLCD1
**          Segment LCD module                             : LCD
**          Interrupt service/event                        : Disabled
**          Stop in Wait mode                              : no
**          Stop in Stop mode                              : no
**          Power supply                                   : 
**            LCD operation voltage                        : 3V
**            Power mode selection                         : Charge Pump
**            Voltage supply control                       : Drive VLL3 internally from VDD
**            Charge pump                                  : Enabled
**              Charge pump clock adjust                   : Intermediate (faster) clock
**              Charge pump clock                          : 2.605 kHz
**              Voltage regulator                          : Disabled
**            Bias voltage VLL1                            : (VLL3 * 1/3) = 0.99V
**            Bias voltage VLL2                            : (VLL3 * 2/3) = 1.98V
**            Bias voltage VLL3                            : Connect internally to VDD(must be 3V)
**          Blink rate bits value                          : 3
**          Blink rate                                     : 0.954101 Hz
**          LCD frame frequency                            : 61.062 Hz
**          Base clock                                     : 1.024 kHz
**          Fault detect                                   : Disabled
**          Backplane pins                                 : 4
**            Backplane pin0                               : 
**              Backplane pin                              : LCD_P40/PTD0/SPI0_PCS0/TPM0_CH0
**              Backplane pin signal                       : 
**            Backplane pin1                               : 
**              Backplane pin                              : LCD_P52/PTE4/SPI1_PCS0
**              Backplane pin signal                       : 
**            Backplane pin2                               : 
**              Backplane pin                              : LCD_P19/PTB23
**              Backplane pin signal                       : 
**            Backplane pin3                               : 
**              Backplane pin                              : LCD_P18/PTB22
**              Backplane pin signal                       : 
**          Frontplane pins                                : 8
**            Frontplane pin0                              : 
**              Frontplane  pin                            : LCD_P37/PTC17
**              Frontplane pin signal                      : 
**            Frontplane pin1                              : 
**              Frontplane  pin                            : LCD_P17/PTB21
**              Frontplane pin signal                      : 
**            Frontplane pin2                              : 
**              Frontplane  pin                            : LCD_P7/PTB7
**              Frontplane pin signal                      : 
**            Frontplane pin3                              : 
**              Frontplane  pin                            : LCD_P8/PTB8/SPI1_PCS0/EXTRG_IN
**              Frontplane pin signal                      : 
**            Frontplane pin4                              : 
**              Frontplane  pin                            : LCD_P53/PTE5
**              Frontplane pin signal                      : 
**            Frontplane pin5                              : 
**              Frontplane  pin                            : LCD_P38/PTC18
**              Frontplane pin signal                      : 
**            Frontplane pin6                              : 
**              Frontplane  pin                            : LCD_P10/PTB10/SPI1_PCS0
**              Frontplane pin signal                      : 
**            Frontplane pin7                              : 
**              Frontplane  pin                            : LCD_P11/PTB11/SPI1_SCK
**              Frontplane pin signal                      : 
**          Initialization                                 : 
**            Enable in init. code                         : yes
**            Auto initialization                          : yes
**            Event mask                                   : 
**              OnFaultDetectComplete                      : Disabled
**          CPU clock/configuration selection              : 
**            Clock configuration 0                        : This component enabled
**            Clock configuration 1                        : This component disabled
**            Clock configuration 2                        : This component disabled
**            Clock configuration 3                        : This component disabled
**            Clock configuration 4                        : This component disabled
**            Clock configuration 5                        : This component disabled
**            Clock configuration 6                        : This component disabled
**            Clock configuration 7                        : This component disabled
**     Contents    :
**         Init              - LDD_TDeviceData* SegLCD1_Init(LDD_TUserData *UserDataPtr);
**         Deinit            - void SegLCD1_Deinit(LDD_TDeviceData *DeviceDataPtr);
**         GetEventStatus    - LDD_TError SegLCD1_GetEventStatus(LDD_TDeviceData *DeviceDataPtr,...
**         SetFrontplaneData - LDD_TError SegLCD1_SetFrontplaneData(LDD_TDeviceData *DeviceDataPtr,...
**         GetFrontplaneData - LDD_TError SegLCD1_GetFrontplaneData(LDD_TDeviceData *DeviceDataPtr,...
**         SetBlinking       - LDD_TError SegLCD1_SetBlinking(LDD_TDeviceData *DeviceDataPtr,...
**         SetBlank          - LDD_TError SegLCD1_SetBlank(LDD_TDeviceData *DeviceDataPtr,...
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file SegLCD1.h
** @version 01.06
** @brief
**         This component "SegLCD_LDD" implements the segment Liquid Crystal Display (SegLCD)
**         driver module. It can drive an LCD which is composed of variable number
**         of frontplanes and backplanes. It can control also current mode of display.
*/         
/*!
**  @addtogroup SegLCD1_module SegLCD1 module documentation
**  @{
*/         

#ifndef __SegLCD1_H
#define __SegLCD1_H

/* MODULE SegLCD1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited components */

#include "Cpu.h"

#ifdef __cplusplus
extern "C" {
#endif 


/*! Peripheral base address of a device allocated by the component. This constant can be used directly in PDD macros. */
#define SegLCD1_PRPH_BASE_ADDRESS  0x40053000U
  
/*! Device data structure pointer used when auto initialization property is enabled. This constant can be passed as a first parameter to all component's methods. */
#define SegLCD1_DeviceData  ((LDD_TDeviceData *)PE_LDD_GetDeviceStructure(PE_LDD_COMPONENT_SegLCD1_ID))



/*
** ===================================================================
**     Method      :  SegLCD1_Init (component SegLCD_LDD)
*/
/*!
**     @brief
**         Initializes the device. Allocates memory for the device data
**         structure, allocates interrupt vectors and sets interrupt
**         priority, sets pin routing, sets timing, etc.
**         If the "Enable in init. code" is set to "yes" value then the
**         device is also enabled(see the description of the Enable()
**         method). In this case the Enable() method is not necessary
**         and needn't to be generated. 
**         This method can be called only once. Before the second call
**         of Init() the Deinit() must be called first.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer will be
**                           passed as an event or callback parameter.
**     @return
**                         - Pointer to the device data structure.
*/
/* ===================================================================*/
LDD_TDeviceData* SegLCD1_Init(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Method      :  SegLCD1_Deinit (component SegLCD_LDD)
*/
/*!
**     @brief
**         Deinitializes the device. Switches off the device, frees the
**         device data structure memory, interrupts vectors, etc.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer.
*/
/* ===================================================================*/
void SegLCD1_Deinit(LDD_TDeviceData *DeviceDataPtr);

/*
** ===================================================================
**     Method      :  SegLCD1_GetEventStatus (component SegLCD_LDD)
*/
/*!
**     @brief
**         Gets current pending flags and clears them. This method is
**         available if the interrupt service property is disabled.
**         This method must be called in polling mode, when is called
**         method StartFaultDetectFrame.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer.
**     @param
**         EventMaskPtr    - Pointer to address of
**                           the EventMask definition variable.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_DISABLED - This component is disabled
**                           by user.
**                           ERR_SPEED - This device does not work in
**                           the active clock configuration
*/
/* ===================================================================*/
LDD_TError SegLCD1_GetEventStatus(LDD_TDeviceData *DeviceDataPtr, LDD_TEventMask *EventMaskPtr);

/*
** ===================================================================
**     Method      :  SegLCD1_SetFrontplaneData (component SegLCD_LDD)
*/
/*!
**     @brief
**         Set data to the LCD frontplane data registers. It
**         sets/clears all used segments.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer.
**     @param
**         Index           - Index of frontplane waveform. Value
**                           corresponds with the index frontplane pins,
**                           what is connected to LCD segment.
**     @param
**         Data            - Value of the frontplane segment. Each
**                           value is the array boolean, word - that
**                           defines state of an LCD segment (On - 1/Off
**                           - 0). Bit position of the word (number of
**                           backplane..0), when is segment on/off,
**                           corresponds with the value of backplane
**                           pins index.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_DISABLED - This component is disabled
**                           by user.
**                           ERR_SPEED - This device does not work in
**                           the active clock configuration
**                           ERR_PARAM_INDEX - Value of index is out of
**                           range.
**                           ERR_PARAM_DATA - Value of frontplane is out
**                           of range.
*/
/* ===================================================================*/
LDD_TError SegLCD1_SetFrontplaneData(LDD_TDeviceData *DeviceDataPtr, LDD_SegLCD_TPinIndex Index, LDD_SegLCD_TFrontplaneData Data);

/*
** ===================================================================
**     Method      :  SegLCD1_GetFrontplaneData (component SegLCD_LDD)
*/
/*!
**     @brief
**         Get data from the LCD frontplane data registers.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer.
**     @param
**         Index           - Index of frontplane waveform. Value
**                           corresponds with the index frontplane pins,
**                           what is connected to LCD segment.
**     @param
**         DataPtr         - Pointer to a variable where value
**                           of the frontplane will be stored. Each
**                           value is the array boolean word that
**                           defines state of an LCD segment (On - 1/Off
**                           - 0). Bit position of the word (number of
**                           backplane..0), when is segment on/off,
**                           corresponds with value of backplane pins
**                           index.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_DISABLED - This component is disabled
**                           by user.
**                           ERR_SPEED - This device does not work in
**                           the active clock configuration
**                           ERR_PARAM_INDEX - Value of index is out of
**                           range.
*/
/* ===================================================================*/
LDD_TError SegLCD1_GetFrontplaneData(LDD_TDeviceData *DeviceDataPtr, LDD_SegLCD_TPinIndex Index, LDD_SegLCD_TFrontplaneData *DataPtr);

/*
** ===================================================================
**     Method      :  SegLCD1_SetBlinking (component SegLCD_LDD)
*/
/*!
**     @brief
**         Activates/deactivates blinking of all segments (according to
**         parameter BlinkMode).
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer.
**     @param
**         BlinkMode       - Parameter for setting blink
**                           mode of segments.
**                           LDD_SEGLCD_BLINK_OFF: Disable blinking.
**                           LDD_SEGLCD_BLINK_ALL: Enable blinking of
**                           all segments (blank display during blink
**                           period)
**                           LDD_SEGLCD_BLINK_ALL_ALTERNATE: Enable
**                           blinking of all segments in alternate mode
**                           (alternate display during blink period) -
**                           available only if supported by the HW.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_DISABLED - This component is disabled
**                           by user.
**                           ERR_SPEED - This device does not work in
**                           the active clock configuration
**                           ERR_PARAM_MODE - Value of BlinkMode
**                           parameter is out of range.
*/
/* ===================================================================*/
LDD_TError SegLCD1_SetBlinking(LDD_TDeviceData *DeviceDataPtr, LDD_SegLCD_TBlinking BlinkMode);

/*
** ===================================================================
**     Method      :  SegLCD1_SetBlank (component SegLCD_LDD)
*/
/*!
**     @brief
**         This method sets the blank display without affecting state
**         of each segment. If supported by the LCD module, the method
**         allows alternate display setting. A segment state is set by
**         method SetFrontplaneData or SetAlternateFrontplaneData.
**     @param
**         DeviceDataPtr   - Device data structure
**                           pointer.
**     @param
**         BlankMode       - Parameter for setting segment
**                           mode of display.
**                           LDD_SEGLCD_BLANK_STATE: It sets the blank
**                           display, all LCD segments are off, but
**                           internal state of the segments is not
**                           affected. It is possible to modify internal
**                           segment state using appropriate methods of
**                           the component.
**                           LDD_SEGLCD_NORMAL_STATE: A segment state
**                           (active/deactive/blinking) is displayed.
**                           LDD_SEGLCD_ALTERNATE_STATE: Sets the
**                           display to alternate mode - available only
**                           if supported by the HW.
**     @return
**                         - Error code, possible codes:
**                           ERR_OK - OK
**                           ERR_DISABLED - This component is disabled
**                           by user.
**                           ERR_SPEED - This device does not work in
**                           the active clock configuration
**                           ERR_PARAM_MODE - Value of BlankMode
**                           parameter is out of range.
*/
/* ===================================================================*/
LDD_TError SegLCD1_SetBlank(LDD_TDeviceData *DeviceDataPtr, LDD_SegLCD_TSetBlank BlankMode);

/* END SegLCD1. */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

#endif
/* ifndef __SegLCD1 */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
