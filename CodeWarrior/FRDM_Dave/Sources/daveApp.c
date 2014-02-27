/*
 * daveApp.c
 *
 *  Created on: Feb 26, 2014
 *      Author: David
 */

#include "daveApp.h"
#include "platform.h"
#include "SegLCD1.h"
#include "LCD.h"
#include "WAIT1.h"

// Lokale Funktionen
void LCDstart();
void writeInt(int value,int dot);

void daveMain(void){
	int i;
	LCDstart();
	
	for(i=0;i<1000;i++)
	{
		writeInt(i,1);
		WAIT1_Waitms(100);
	}
		
for(;;){}
	
}

void LCDstart(void)
{
	//LDD_TDeviceData *MySegLCDPtr;
	int i;
	SegLCD1_Init(NULL);  //initialize sLCD according to PEx 
	  vfnLCD_Write_Msg((uint8 *)"8888");
	  _LCD_DP1_ON();
	  _LCD_DP2_ON();
	  _LCD_DP3_ON();
	  _LCD_COL_ON();
	   for (i=1000000 ; i>0 ;i--){}; //delay to show all symbol ON
	  _LCD_DP1_OFF();
	  _LCD_DP2_OFF();
	  _LCD_DP3_OFF();
	  _LCD_COL_OFF();
	  vfnLCD_Write_Msg((uint8 *)"");
}


/**
 * Der übergebene Int-Wert wird am Display angezeigt (Range 0-8888)
 * @param value Wert der angezeigt werden Soll
 * @param dot   0=kein Punkt anzeigen
 * 				1=10stel punkt anzeigen
 * 				2=100stel punkt anzeigen
 * 				3=1000stel punkt anzeigen
 * 				4=Doppelpunkt in der Mitte anzeigen
 */

void writeInt(int value,int dot)
{
	uint8 message[4] = {48,48,48,48}; // Alle Digits Nullen
	if(value<0 || value>8888){value = 0;} // GrenzCheck
	
	//Display Digits berechnen
	if(value<1000){message[0]=32;} //Digit löschen wenn nicht gebraucht
	if(value<100){message[1]=32;}
	if(value<10){message[2]=32;}
	if(value<1){message[3]=32;}
	
	message[0] += (uint8)(value/1000);
	value = value%1000;
	message[1] += (uint8)(value/100);
	value = value%100;
	message[2] += (uint8)(value/10);
	value = value%10;
	message[3] += (uint8)(value);
	
	
	// Punkte Ansteuern
	  _LCD_DP1_OFF();
	  _LCD_DP2_OFF();
	  _LCD_DP3_OFF();
	  _LCD_COL_OFF();
	
	if(dot == 1){  _LCD_DP3_ON();  }
	if(dot == 2){  _LCD_DP2_ON();  }
	if(dot == 3){  _LCD_DP1_ON();  }
	if(dot == 4){  _LCD_COL_ON();  }
	
	vfnLCD_Write_Msg(message);		
}
