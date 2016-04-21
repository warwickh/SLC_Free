//*****************************************************************************
//*****************************************************************************
//  FILENAME:  AMUX4_0.h
//  Version: 1.50, Updated on 2012/9/21 at 11:56:52
//  Generated by PSoC Designer 5.3.2710
//
//  DESCRIPTION:  AMux4 User Module C Language interface file.
//
//-----------------------------------------------------------------------------
//      Copyright (c) Cypress Semiconductor 2012. All Rights Reserved.
//*****************************************************************************
//*****************************************************************************
#ifndef AMUX4_0_INCLUDE
#define AMUX4_0_INCLUDE

#include <m8c.h>
//-------------------------------------------------
// Defines for AMUX4_0 API's.
//-------------------------------------------------
#define AMUX4_0_PORT0_0                0x00
#define AMUX4_0_PORT0_2                0x01
#define AMUX4_0_PORT0_4                0x02
#define AMUX4_0_PORT0_6                0x03

#define AMUX4_0_PORT0_1                0x00
#define AMUX4_0_PORT0_3                0x01
#define AMUX4_0_PORT0_5                0x02
#define AMUX4_0_PORT0_7                0x03


#pragma fastcall16 AMUX4_0_InputSelect
#pragma fastcall16 AMUX4_0_Start
#pragma fastcall16 AMUX4_0_Stop

//-------------------------------------------------
// Prototypes of the AMUX4_0 API.
//-------------------------------------------------

extern void AMUX4_0_InputSelect(BYTE bChannel);
extern void AMUX4_0_Start(void);
extern void AMUX4_0_Stop(void);

#endif
// end of file AMUX4_0.h
