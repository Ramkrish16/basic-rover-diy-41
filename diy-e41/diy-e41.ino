/*************************************************************************************************************************************************
 *  TITLE: Making A Simple 2WD Rover Using An Arduino - DIY #41
 *
 *  By Frenoy Osburn
 *  YouTube Video: https://youtu.be/cIpXCbzgRDA
 *************************************************************************************************************************************************/
 
#include "rover.h"

#define DELAY_TIME    2000

void setup() 
{
  roverInit();
}

void loop() 
{
  roverMoveForward();
  delay(DELAY_TIME);

  roverMoveReverse();
  delay(DELAY_TIME);
  
  roverTurnRight();
  delay(DELAY_TIME);   
  
  roverTurnLeft();
  delay(DELAY_TIME);   
  
  roverMoveForwardRapid();
  delay(DELAY_TIME); 
  
  roverMoveReverseRapid();
  delay(DELAY_TIME); 
  
  roverTurnRightRapid();
  delay(DELAY_TIME); 
  
  roverTurnLeftRapid();
  delay(DELAY_TIME); 
}
