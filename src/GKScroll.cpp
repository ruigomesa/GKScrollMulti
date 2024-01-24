/*
  GKScroll.cpp - Library for scrolling long lines of text on an LCD screen..
  Created by Garrett Kendrick, February 23, 2012.

  This work is licensed under the Creative Commons Attribution-ShareAlike 4.0 International License. 
  To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/4.0/deed.en_US.
*/



#include "Arduino.h"
#include "GKScroll.h"

int lineOneStep, lineTwoStep = 0;
int line1OneStep, line1TwoStep = 0;
int line2OneStep, line2TwoStep = 0;
int line3OneStep, lineT3woStep = 0;



String ScrollLine(String lineToScrollLeft, int scrollBuffer, int lcdColumns){
  
int  stringLength = lineToScrollLeft.length();
 if(lineOneStep > lineToScrollLeft.length() + scrollBuffer){
   lineOneStep = 0;
 }
 int stringEndPosition = lineOneStep + lcdColumns;
 if (stringEndPosition > (lineToScrollLeft.length())){
  int difference = stringEndPosition - lineToScrollLeft.length();
  
   for(int i=0; i < scrollBuffer; i++){
 lineToScrollLeft = lineToScrollLeft + " ";
  }
  for(int i=0; i < (difference - scrollBuffer); i++){
    int iplus1 = i + 1;
  String tempString = lineToScrollLeft.substring(i,iplus1);  
  lineToScrollLeft = lineToScrollLeft + tempString ;  
  }
  
 }
 String str = lineToScrollLeft.substring(lineOneStep,stringEndPosition);
 lineOneStep++;
 return str;
   
}

String ScrollLine1(String lineToScrollLeft, int scrollBuffer, int lcdColumns){
  
int  stringLength = lineToScrollLeft.length();
 if(line1OneStep > lineToScrollLeft.length() + scrollBuffer){
   line1OneStep = 0;
 }
 int stringEndPosition = line1OneStep + lcdColumns;
 if (stringEndPosition > (lineToScrollLeft.length())){
  int difference = stringEndPosition - lineToScrollLeft.length();
  
   for(int i=0; i < scrollBuffer; i++){
 lineToScrollLeft = lineToScrollLeft + " ";
  }
  for(int i=0; i < (difference - scrollBuffer); i++){
    int iplus1 = i + 1;
  String tempString = lineToScrollLeft.substring(i,iplus1);  
  lineToScrollLeft = lineToScrollLeft + tempString ;  
  }
  
 }
 String str = lineToScrollLeft.substring(line1OneStep,stringEndPosition);
 line1OneStep++;
 return str;
   
}
String ScrollLine2(String lineToScrollLeft, int scrollBuffer, int lcdColumns){
  
int  stringLength = lineToScrollLeft.length();
 if(line2OneStep > lineToScrollLeft.length() + scrollBuffer){
   line2OneStep = 0;
 }
 int stringEndPosition = line2OneStep + lcdColumns;
 if (stringEndPosition > (lineToScrollLeft.length())){
  int difference = stringEndPosition - lineToScrollLeft.length();
  
   for(int i=0; i < scrollBuffer; i++){
 lineToScrollLeft = lineToScrollLeft + " ";
  }
  for(int i=0; i < (difference - scrollBuffer); i++){
    int iplus1 = i + 1;
  String tempString = lineToScrollLeft.substring(i,iplus1);  
  lineToScrollLeft = lineToScrollLeft + tempString ;  
  }
  
 }
 String str = lineToScrollLeft.substring(line2OneStep,stringEndPosition);
 line2OneStep++;
 return str;
   
}
String ScrollLine3(String lineToScrollLeft, int scrollBuffer, int lcdColumns){
  
int  stringLength = lineToScrollLeft.length();
 if(line3OneStep > lineToScrollLeft.length() + scrollBuffer){
   line3OneStep = 0;
 }
 int stringEndPosition = line3OneStep + lcdColumns;
 if (stringEndPosition > (lineToScrollLeft.length())){
  int difference = stringEndPosition - lineToScrollLeft.length();
  
   for(int i=0; i < scrollBuffer; i++){
 lineToScrollLeft = lineToScrollLeft + " ";
  }
  for(int i=0; i < (difference - scrollBuffer); i++){
    int iplus1 = i + 1;
  String tempString = lineToScrollLeft.substring(i,iplus1);  
  lineToScrollLeft = lineToScrollLeft + tempString ;  
  }
  
 }
 String str = lineToScrollLeft.substring(line3OneStep,stringEndPosition);
 line3OneStep++;
 return str;
   
}

