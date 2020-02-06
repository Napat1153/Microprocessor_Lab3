int c[10]={0b11111100,0b01100000,0b11011011,0b11110011,0b01100111,
           0b10110111,0b10111111,0b11100000,0b11111111,0b11110111};
           int a,j=0;
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(6, OUTPUT);
    pinMode(8, INPUT_PULLUP);
      pinMode(9, INPUT_PULLUP);
}

void loop()
{
  j=0;
  while(j<10)
  {
    digitalWrite(4,LOW);
    delay(10);
    for(int i=0;i<8;i++)
    {
      {
      digitalWrite(5,c[j]>>(i)&0x01);
      delay(10);
      digitalWrite(6, HIGH);
      delay(10);
      digitalWrite(6, LOW);
      delay(10);
      }
    }
  int b=digitalRead(9);
  int c=digitalRead(8);
  if(b==0)
  j++;
  if(c==0)
  j--;
  if(j==-1)
  j=9;
  digitalWrite(4, HIGH);
  delay(10);
  delay(500);
  }
}
