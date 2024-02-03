/*
  GKScroll.cpp - Library for scrolling long lines of text on an LCD screen..
  Created by Garrett Kendrick, February 23, 2012.

  This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 International License. 
  To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/deed.en_US.
*/



#include "Arduino.h"
#include "GKScrollMulti.h"

int lineStep[] = {0, 0, 0, 0};


String ScrollLine(String lineToScrollLeft, int scrollBuffer, int lcdColumns, int lcdLine, int reset) {
  int  stringLength = lineToScrollLeft.length();
  if (lineStep[lcdLine] > lineToScrollLeft.length() + scrollBuffer || reset == 1) {
    lineStep[lcdLine] = 0;
  }
  int stringEndPosition = lineStep[lcdLine] + lcdColumns;
  if (stringEndPosition > (lineToScrollLeft.length())) {
    int difference = stringEndPosition - lineToScrollLeft.length();

    for (int i = 0; i < scrollBuffer; i++) {
      lineToScrollLeft = lineToScrollLeft + " ";
    }
    for (int i = 0; i < (difference - scrollBuffer); i++) {
      int iplus1 = i + 1;
      String tempString = lineToScrollLeft.substring(i, iplus1);
      lineToScrollLeft = lineToScrollLeft + tempString ;
    }

  }
  String str = lineToScrollLeft.substring(lineStep[lcdLine], stringEndPosition);
  lineStep[lcdLine]++;
  return str;

}

