#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

byte cauda1[8] ={
  B00000,
  B10000,
  B01000,
  B01101,
  B00111,
  B00010,
  B00000,
  B00000};

byte cauda2[8] ={
  B00000,
  B00000,
  B00010,
  B00111,
  B01101,
  B01000,
  B10000,
  B00000};

byte FLECHAcima[8] ={
  B00000,
  B00100,
  B01110,
  B11111,
  B11001,
  B10001,
  B00000,
  B00000};
byte FLECHAbaixo[8] ={
  B00000,
  B00000,
  B00000,
  B10001,
  B11011,
  B11111,
  B01110,
  B00100};

byte pescoco[8]= {
  B00001,
  B00011,
  B00111,
  B11111,
  B11100,
  B11000,
  B00000,
  B00000};

byte cabeca[8] ={
  B11100,
  B10100,
  B11100,
  B11100,
  B00000,
  B00000,
  B00000,
  B00000};
void setup() {
  
  lcd.begin(16,2);
  lcd.createChar(1, cauda1);
  lcd.createChar(2, cauda2);
  lcd.createChar(3, FLECHAcima);
  lcd.createChar(4, FLECHAbaixo);
  lcd.createChar(5, pescoco);
  lcd.createChar(6, cabeca);

}

void loop() {

   lcd.setCursor(0,0);

  lcd.write(1);
  lcd.write(3);
  lcd.write(4);
  lcd.write(5);
  lcd.write(6);

  delay(5000);
  lcd.clear();
  lcd.setCursor(0,0);

  lcd.write(2);
  lcd.write(4);
  lcd.write(3);
  lcd.write(5);
  lcd.write(6);



  delay(5000);
  lcd.clear();

}
