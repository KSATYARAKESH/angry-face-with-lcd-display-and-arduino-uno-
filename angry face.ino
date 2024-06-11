
//CREATED BY K.SATYA RAKESH

//ANGRY FACE 

//CIRCUIT 
//LCD PIN 1 TO BREAD BOARD -   
//LCD PIN 2 TO BREAD BOARD +
//LCD PIN 3 TO 10K POT (CENTRE PIN)
//LCD PIN 4 TO ARDUINO PIN 12
//LCD PIN 5 TO BREAD BOARD -
//LCD PIN 6 TO BREAD BOARD 11
//LCD PIN 11 TO ARDUINO PIN 5
//LCD PIN 12 TO ARDUINO PIN 4
//LCD PIN 13 TO ARDUINO PIN 3 
//LCD PIN 14 TO ARDUINO PIN 2
//LCD PIN 15 TO BREAD BOARD +
//LCD PIN 16 TO BREAD BOARD -

//10K POTO
//10K POTO LEFT PIN BREAD BOARD +
//10K POTO RIGHT PIN BREAD BOARD -
 
//ARDUINO +5V TO BREAD BOARD +
//ARDUINO GND TO BREAD BOARD -

#include<LiquidCrystal.h>
int rs=12,en=11,d7=2,d6=3,d5=4,d4=5;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

byte g[8]={
  B00011,
  B00111,
  B00111,
  B01110,
  B11110,
  B11111,
  B11111,
  B11111
};

byte h[8]={
  B11111,
  B11111,
  B11111,
  B11111,
  B01110,
  B00100,
  B11111,
  B11111
};

byte i[8]={
  B10000,
  B11000,
  B11100,
  B01110,
  B01111,
  B11111,
  B11111,
  B11111
};

byte j[8]={
  B11111,
  B11111,
  B11111,
  B11110,
  B01111,
  B00111,
  B00011,
  B00000
};

byte k[8]={
  B11111,
  B11111,
  B00000,
  B11111,
  B11111,
  B11111,
  B11111,
  B00000
};

byte l[8]={
  B11111,
  B11111,
  B11111,
  B01111,
  B11110,
  B11100,
  B11000,
  B00000
};

void setup() {
  lcd.begin(16,2);

  lcd.createChar(0,g);

  lcd.createChar(1,h);

  lcd.createChar(2,i);

  lcd.createChar(3,j);

  lcd.createChar(4,k);

  lcd.createChar(5,l);

}

void loop() {

  lcd.setCursor(11,0);
  lcd.write(byte(0));

  lcd.setCursor(12,0);
  lcd.write(byte(1));

  lcd.setCursor(13,0);
  lcd.write(byte(2));

  lcd.setCursor(11,1);
  lcd.write(byte(3));

  lcd.setCursor(12,1);
  lcd.write(byte(4));

  lcd.setCursor(13,1);
  lcd.write(byte(5));
  

}