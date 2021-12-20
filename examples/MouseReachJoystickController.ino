#include <MouseReachJoystickController.h>


MouseReachJoystickController dev;

void setup()
{
  dev.setup();
  dev.startServer();
}

void loop()
{
  dev.update();
}
