#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor RMot18 = motor(PORT11, ratio6_1, true);
motor RMot19 = motor(PORT12, ratio6_1, false);
motor RMot20 = motor(PORT13, ratio6_1, false);
motor LMot7 = motor(PORT17, ratio6_1, false);
motor LMot8 = motor(PORT19, ratio6_1, true);
motor LMot9 = motor(PORT18, ratio6_1, true);
controller Controller1 = controller(primary);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}