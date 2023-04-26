#include <Wire.h>

// Use the Wire library to communicate with I2C devices

void initI2C()
{
  Wire.begin();
}

void writeI2C()
{
  Wire.beginTransmission(0x08); // transmit to device #8
  Wire.write("hello");         // sends five bytes
  Wire.endTransmission();    // stop transmitting
}

void readI2C()
{
  Wire.requestFrom(0x08, 5);    // request 5 bytes from slave device #8
  while (Wire.available()) { // slave may send less than requested
    char c = Wire.read(); // receive a byte as character
  }
}

void loopI2C()
{
  writeI2C();
  readI2C();
}