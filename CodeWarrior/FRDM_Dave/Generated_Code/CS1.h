/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : CS1.h
**     Project     : ProcessorExpert
**     Processor   : MKL46Z256VMC4
**     Component   : CriticalSection
**     Version     : Component 01.003, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-03-21, 23:00, # CodeGen: 10
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         CriticalVariable - void CS1_CriticalVariable(void);
**         EnterCritical    - void CS1_EnterCritical(void);
**         ExitCritical     - void CS1_ExitCritical(void);
**
**     License   : Open Source (LGPL)
**     Copyright : Erich Styger, 2014, all rights reserved.
**     Web       : www.mcuoneclipse.com
**     This an open source software implementing a driver using Processor Expert.
**     This is a free software and is opened for education, research and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file CS1.h
** @version 01.00
** @brief
**
*/         
/*!
**  @addtogroup CS1_module CS1 module documentation
**  @{
*/         

#ifndef __CS1_H
#define __CS1_H

/* MODULE CS1. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */

#include "Cpu.h"


#define CS1_CriticalVariable() \
  uint8_t cpuSR; /* variable to store current status */

/*
** ===================================================================
**     Method      :  CS1_CriticalVariable (component CriticalSection)
**     Description :
**         Defines a variable if necessary. This is a macro.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define CS1_EnterCritical() \
  do {                                  \
    asm (                               \
    "MRS   R0, PRIMASK\n\t"             \
    "CPSID I\n\t"                       \
    "STRB R0, %[output]"                \
    : [output] "=m" (cpuSR) :: "r0");   \
  } while(0)

/*
** ===================================================================
**     Method      :  CS1_EnterCritical (component CriticalSection)
**     Description :
**         Enters a critical section
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

#define CS1_ExitCritical() \
  do{                                  \
    asm (                              \
    "ldrb r0, %[input]\n\t"            \
    "msr PRIMASK,r0;\n\t"              \
    ::[input] "m" (cpuSR) : "r0");     \
  } while(0)

/*
** ===================================================================
**     Method      :  CS1_ExitCritical (component CriticalSection)
**     Description :
**         Exits a critical section
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/* END CS1. */

#endif
/* ifndef __CS1_H */
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
