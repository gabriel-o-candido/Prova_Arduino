#define vm 8
#define vd 9
#define az 10

int valor;
int leda;
int ledb;
int ledc;

void setup() {
  
Serial.begin (9600);
pinMode (8,OUTPUT);
pinMode (9,OUTPUT);
pinMode (10,OUTPUT);

}

void loop() {
  
int pot= analogRead (0);
valor= map (pot,0,1023,0,100);
leda= digitalRead (8);
ledb= digitalRead (9);
ledc= digitalRead (10);

if (valor>60) 
 {
  digitalWrite (vm,1);
  digitalWrite (vd,0);
  digitalWrite (az,0);
 }
else if (valor<20)
 {
  digitalWrite (az,1);
  digitalWrite (vd,0);
  digitalWrite (vm,0);
 }
else
 {
  digitalWrite (vd,1);
  digitalWrite (vm,0);
  digitalWrite (az,0);
 }
Serial.print ("Valor Lido:");
Serial.print (valor);
Serial.print ("%");
if (ledc==1)
 {
  Serial.print ("  Led AZUL ativo");
 }
if (ledb==1)
 {
  Serial.print ("  Led VERDE ativo");
 }
if (leda==1)
 {
  Serial.print ("  Led VERMELHO ativo");
 }
Serial.println (" ");
delay (100);
}
