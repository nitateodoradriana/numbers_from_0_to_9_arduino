// C++ code
//
const int a = 12, b = 13;
const int c = 8,d = 7;
const int e = 6,f = 11;
const int dp = 9, g = 10;
void setup()
{
  for(int LED_pin = 6; LED_pin<= 13; LED_pin++){ 
    pinMode(LED_pin, OUTPUT);}
  //aici am configurat toti pinii care sunt conectati 
  //la niste leduri si ca sa nu mai stam sa configuram pe fiecare
  //ca iesiri am facut un for care sa treaca prin fiecare
  //si sa seteze
}

void loop()
{
  digital_0();delay(2000); // Wait for 1000 millisecond(s)
  digital_1(); delay(2000); // Wait for 1000 millisecond(s)
  digital_2();delay(2000);
  digital_3();delay(2000);
  digital_4();delay(2000);
  digital_5();delay(2000);
  digital_6();delay(2000);
  digital_7(); delay(2000);
  digital_8();delay(2000);
  digital_9();delay(2000);
}
void digital_0(void){
  digitalWrite(a,HIGH); digitalWrite(b,HIGH);digitalWrite(c,HIGH);
  digitalWrite(d,HIGH); digitalWrite(e,HIGH);digitalWrite(f,HIGH);
  digitalWrite(g,LOW);digitalWrite(dp,LOW);}
void digital_1(void){
  digitalWrite(a,LOW); digitalWrite(b,HIGH);digitalWrite(c,HIGH);
  digitalWrite(d,LOW); digitalWrite(e,LOW);digitalWrite(f,LOW);
  digitalWrite(g,LOW);digitalWrite(dp,LOW);}
void digital_2(void){
  digitalWrite(a,HIGH); digitalWrite(b,HIGH);digitalWrite(c,LOW);
  digitalWrite(d,HIGH); digitalWrite(e,HIGH);digitalWrite(f,LOW);
  digitalWrite(g,HIGH);digitalWrite(dp,LOW);}
void digital_3(void){
  digitalWrite(a,HIGH); digitalWrite(b,HIGH);digitalWrite(c,HIGH);
  digitalWrite(d,LOW); digitalWrite(e,HIGH);digitalWrite(f,LOW);
  digitalWrite(g,HIGH);digitalWrite(dp,LOW);}
void digital_4(void){
  digitalWrite(a,LOW); digitalWrite(b,LOW);digitalWrite(c,HIGH);
  digitalWrite(d,LOW); digitalWrite(e,LOW);digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);digitalWrite(dp,LOW);}
void digital_5(void){
  digitalWrite(a,HIGH); digitalWrite(b,LOW);digitalWrite(c,HIGH);
  digitalWrite(d,LOW); digitalWrite(e,HIGH);digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);digitalWrite(dp,LOW);}
void digital_6(void){
  digitalWrite(a,HIGH); digitalWrite(b,LOW);digitalWrite(c,HIGH);
  digitalWrite(d,HIGH); digitalWrite(e,HIGH);digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);digitalWrite(dp,LOW);}
void digital_7(void){
  digitalWrite(a,HIGH); digitalWrite(b,HIGH);digitalWrite(c,HIGH);
  digitalWrite(d,LOW); digitalWrite(e,LOW);digitalWrite(f,LOW);
  digitalWrite(g,LOW);digitalWrite(dp,LOW);}
void digital_8(void){
  digitalWrite(a,HIGH); digitalWrite(b,HIGH);digitalWrite(c,HIGH);
  digitalWrite(d,HIGH); digitalWrite(e,HIGH);digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);digitalWrite(dp,LOW);}
void digital_9(void){
  digitalWrite(a,HIGH); digitalWrite(b,HIGH);digitalWrite(c,HIGH);
  digitalWrite(d,LOW); digitalWrite(e,HIGH);digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);digitalWrite(dp,LOW);}





