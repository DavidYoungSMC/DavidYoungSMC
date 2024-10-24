using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor RMot18;
extern motor RMot19;
extern motor RMot20;
extern motor LMot7;
extern motor LMot8;
extern motor LMot9;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );