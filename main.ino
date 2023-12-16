#include <ESP8266WiFi.h>
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <Arduino.h>
#include <U8g2lib.h>
#include "data.h"

int val=1;

//U8G2_SSD1306_128X64_NONAME_F_SW_I2C u8g2(U8G2_R0, /* clock=*/ SCL, /* data=*/ SDA, /* reset=*/ U8X8_PIN_NONE); 
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);
//买的时候看下自己的oled屏幕的芯片是SSD1306还是SH1106，用对应的，都不是就到u8g2库里拉一行过来

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

//oled设置
int c_x = -15;
int c_y = 20;

int r_x = 128;
int r_y = 40;

static unsigned int start = millis();
static unsigned int end = millis();

 
// WiFi credentials and web server
const char *ssid = "86_AP";
const char *password = "12345678";
ESP8266WebServer server(80);

// Forward declaration of functions
void  setupPwm();
void  setupWiFi();
void  setupOled();
void  setupServer();


// 
void S() { sleep(); sj(); }
void N() { zc(); normal();}
void FL() { zc();normal();forward(); forward();forward();forward();}

void B() { zc();normal();backward();backward();backward();backward();}
void L() { zc();normal();left();left();left();}
void R() { zc();normal();right();right();right();right();}

void H() { normal();nh();hello();}
void C() { normal();la();come();}
void D() { sleep();gp();dog();dog();dog();dog();}

void M() { yh();middle();}
void U() { sleep();tx();surrender();}
void W() {normal();yb();swing();zc();normal();}

void I() { zc();lie();}
void A() {val=val*(-1);lie();sz();
          for(int f_i=0;f_i<15;f_i++){fan();}}
void K() {yh();}



 
void setup() {
  Serial.begin(115200);
  setupPwm();
  pinMode(16, OUTPUT);  //用于连接Wi-Fi的LED指示灯
  digitalWrite(16, LOW);  
  setupWiFi();
  setupOled();
  setupServer();
  
  digitalWrite(16, HIGH);

}



void loop() {
  server.handleClient();
  
}
 
