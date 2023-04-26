#include <SPI.h>

// Use the SPI library to communicate with a LCD display

//================================================================================
// SPI with SPI-library
//================================================================================

void initSPI()
{
  SPI.begin();
}

void writeSPI()
{
  SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE0));
  SPI.transfer(0x00);
  SPI.endTransaction();
}

void readSPI()
{
  SPI.beginTransaction(SPISettings(1000000, MSBFIRST, SPI_MODE0));
  SPI.transfer(0x00);
  SPI.endTransaction();
}

void loopSPI()
{
  writeSPI();
  readSPI();
}

// ================================================================================
// SPI with digitalWrite
// ================================================================================

void configureSPI()
{
  pinMode(SCK, OUTPUT);
  pinMode(MOSI, OUTPUT);
  pinMode(MISO, INPUT);
  pinMode(SS, OUTPUT);
  digitalWrite(SS, HIGH);
}

void writeSPI2()
{
  digitalWrite(SS, LOW);
  digitalWrite(SCK, LOW);
  digitalWrite(MOSI, LOW);
  digitalWrite(SCK, HIGH);
  digitalWrite(SS, HIGH);
}

void readSPI2()
{
  digitalWrite(SS, LOW);
  digitalWrite(SCK, LOW);
  digitalWrite(MOSI, LOW);
  digitalWrite(SCK, HIGH);
  digitalWrite(SS, HIGH);
}


