/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\School                                           */
/*    Created:      Wed Oct 25 2023                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// RMot18               motor         11              
// RMot19               motor         12              
// RMot20               motor         13              
// LMot7                motor         17              
// LMot8                motor         19              
// LMot9                motor         18              
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

competition Competition;
// "when started" hat block


void setSpeed() { while (true){
  int forVar = Controller1.Axis3.position(percent);
  float turnVar = Controller1.Axis1.position(percent);
  int rmVar = 0;
  int lmVar = 0;

if (forVar < 5 && forVar > -5) {
  forVar = (0);
  }

if (forVar < 0) {
 rmVar = (forVar + turnVar);
 lmVar = (forVar - turnVar);
 if (lmVar > 0){lmVar = 0;}
 if (rmVar > 0){rmVar = 0;}
} else if (forVar > 0){
  rmVar = (forVar - turnVar);
  lmVar = (forVar + turnVar);
  if (rmVar < 0){rmVar = 0;}
  if (lmVar < 0){lmVar = 0;}
} else {
  rmVar = (-turnVar);
  lmVar = (turnVar);
}

  RMot18.setVelocity(rmVar, percent);
  RMot19.setVelocity(rmVar, percent);
  RMot20.setVelocity(rmVar, percent);
  LMot7.setVelocity(lmVar, percent);
  LMot8.setVelocity(lmVar, percent);
  LMot9.setVelocity(lmVar, percent);
  RMot18.spin(forward);
  RMot19.spin(forward);
  RMot20.spin(forward);
  LMot7.spin(forward);
  LMot8.spin(forward);
  LMot9.spin(forward);
}}

int main() {
  Competition.drivercontrol(setSpeed);
} 