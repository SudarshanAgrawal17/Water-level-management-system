#define buzz 8
#define l1 13
#define l2 12
#define l3 ~11
int level;
const int analog_0=0;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(buzz,OUTPUT);
  digitalWrite(l1,LOW);
  digitalWrite(l2,LOW);
  digitalWrite(l3,LOW);
  digitalWrite(buzz,LOW);
}

void loop() {
  
  // put your main code here, to run repeatedly:
level=analogRead(analog_0);
Serial.println(level);
if(level>=0&&level<500)
{ Serial.println("Water level-Low");
  digitalWrite(l1, HIGH);
  delay(1000);
  digitalWrite(l2, LOW);
   digitalWrite(l3, LOW);
   digitalWrite(buzz, LOW);
  
  }
else if(level>=500&&level<600)
 {
   Serial.println("Water level-Medium");
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  delay(1000);
   digitalWrite(l3, LOW);
    digitalWrite(buzz, LOW);
  }

else if(level>=600)
 {
   Serial.println("Water level-High");
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
   digitalWrite(l3, HIGH);
   delay(1000);
  digitalWrite(buzz, HIGH);
  }

}
