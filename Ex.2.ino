#include <LiquidCrystal.h>
LiquidCrystal lcd (7,6,5,4,3,2);

byte symbGRAUS[8] = {
  B11100,
  B10100,
  B11100,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};
void setup() {
  lcd.begin (16,2);
  lcd.createChar (1,symbGRAUS);
}
void loop() {
 int pot= analogRead (0);
 int potb= analogRead (1);
 int temp= map (pot,0,1023,0,150);
 int pres= map (potb,0,1023,0,50);
 lcd.setCursor (0,1);
 lcd.print ("Temp.=>");
 lcd.print (temp);
 lcd.write (1);
 lcd.print ("C");
 lcd.print ("  ");
 lcd.setCursor (0,0);
 lcd.print ("Pressao=>");
 lcd.print (pres);
 lcd.print (" psi");
 lcd.print ("  ");
 delay (100);
}
