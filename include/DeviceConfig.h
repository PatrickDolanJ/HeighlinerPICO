#ifndef DEVICE_CONFIG
#define DEVICE_CONFIG

# include <Arduino.h>

//--------------Settings---------------
const String DEVICE_NAME = "HeighLiner";
const int DEFAULT_VOLUME = 125;
const int DEFAIUL_DELAY_TIME_S = 2;
const String DEFAULT_COLOR = "19703";
const String HIGHLIGHT_COLOR = "65535"; 
const float LONG_PRESS_INTERVAL_S = 1.75;
const int spiDelay = 1;

//------------I2C Addresses-------------
const byte ROTARY_BUTTONS_ADDRESS = 0x21;
const byte FOOTSWITCH_ADDRESS = 0x22;
const byte FOOT_SWITCH_LIGHTS_ADDRESS = 0x23;
const byte RETURN_RELAYS_ADDRESS = 0x24;
const byte RIGHT_PHASE_RELAY_ADDRESS = 0x25;
const byte LEFT_PHASE_RELAYS_ADDRESS = 0x26;
const byte RIGHT_MATRIX_ADDRESS = 0x70;
const byte LEFT_MATRIX_ADDRESS = 0x74;


//------------------------------PINS-------------------------
//Interupts
const int ROTARY_ENCODER_INTERUPT_PIN = 2;
const int ROTARY_INTERUPT_PIN = 3; 
const int FOOT_INTERUPT_PIN = 18; 

//SPI CHIP SELECTS
const int cs0_pin = 19;
const int cs1_pin = 20; // 33 is ground
const int cs2_pin = 21;
const int cs3_pin = 22; //ACF REF
const int cs4_pin = 24; //3V3 Out
const int cs5_pin = 25; //37 is 3V3_EN

const int SD_CARD_CHIP_SELECT_PIN = 26;


#endif // !DEVICE_CONFIG