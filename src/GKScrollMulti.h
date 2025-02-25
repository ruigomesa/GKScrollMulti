/*
  GKScroll.h - Library for scrolling long lines of text on an LCD screen..
  Created by Garrett Kendrick, February 23, 2012.

  This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 International License. 
  To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/deed.en_US.
*/


#include "Arduino.h"

String ScrollLine(String lineToScrollLeft, int scrollBuffer, int lcdColumns, int lcdLine = 0, int reset = 0);


//String ScrollLine(String lineToScrollLeft, int scrollBuffer, int lcdColumns);
//String ScrollLine1(String lineToScrollLeft, int scrollBuffer, int lcdColumns);
//String ScrollLine2(String lineToScrollLeft, int scrollBuffer, int lcdColumns);
//String ScrollLine3(String lineToScrollLeft, int scrollBuffer, int lcdColumns);

