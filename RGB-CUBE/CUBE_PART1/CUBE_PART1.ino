///////////////// při tomhle zapojeni se rgb ledky postupne  zapinaji.Takze na prvni hvezde se prvne rozsviti  prvně red, za druhé  green,treti blue , ctvrta light blue a jako posledni se rozsviti vsechny .
///// prvne se takhle rozsviti jedna hvezda a potom se cyklus opakuje na ostatnich rgb hvezdach 
///////////tenhle program byl napsanej jenom pro 3 hvezdy 
//////////// po dvou dalsich pokusech pridam posledni hvezdu 
////////////////////zkrátka tenhle program postupne pridavá barvy :)


int r1= 2 ;
int g1= 3;
int b1= 4;
int r2= 5;
int g2 =6;
int b2=7;
int r3=8;
int g3=9;
int b3=10;
int r4=11;
int g4=12;
int b4=13;




void setup() {
pinMode (r1,OUTPUT);
pinMode (g1,OUTPUT);
pinMode (b1,OUTPUT);
pinMode (r2,OUTPUT);
pinMode (g2,OUTPUT);
pinMode (b2,OUTPUT);
pinMode (r3,OUTPUT);
pinMode (g3,OUTPUT);
pinMode (b3,OUTPUT);
pinMode (r4,OUTPUT);
pinMode (g4,OUTPUT);
pinMode (b4,OUTPUT);

}

void loop() {
  digitalWrite(r1,HIGH);
  delay(5000);
  digitalWrite(g1,HIGH);
  delay(5000); 
  digitalWrite(b1,HIGH);
  delay(5000);
  digitalWrite(r2,HIGH);
   delay(5000);
  digitalWrite(g2,HIGH);
   delay(5000);
  digitalWrite(b2,HIGH);
   delay(5000);
  digitalWrite(r3,HIGH);
   delay(5000);
  digitalWrite(g3,HIGH); 
   delay(5000);
  digitalWrite(b3,HIGH);
   delay(5000);
   digitalWrite(r4,HIGH);
   delay(5000);
   digitalWrite(g4,HIGH);
   delay(5000);
   digitalWrite(b4,HIGH);
   delay(5000);
