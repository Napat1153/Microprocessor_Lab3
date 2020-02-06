#define DATA_PIN 5
#define CLOCK_PIN 6
#define LATCH_PIN 4
int num[10] = {
 //0b0gfedcba
   0b00111111, //0
   0b00000110, //1
   0b11011011, //2
   0b011001111, //3
   0b11100110, //4
   0b011101101, //5
   0b011111101, //6
   0b000100111, //7
   0b011111111, //8
   0b011101111, //9
};
void setLed(uint8_t _state){
  for(int i=0 ; i<8 ; i++){
    digitalWrite(DATA_PIN,(_state>>(7-i))&0x01);
    digitalWrite(CLOCK_PIN,HIGH);
    digitalWrite(CLOCK_PIN,LOW);
  }
  digitalWrite(LATCH_PIN,HIGH);
  digitalWrite(LATCH_PIN,LOW);               
}
void setup()
{                 
  pinMode(LATCH_PIN, OUTPUT);           
  pinMode(CLOCK_PIN, OUTPUT);
  pinMode(DATA_PIN, OUTPUT);  
}   
void loop()
{
  setLed(num[2]);
}
