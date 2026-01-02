#include <Servo.h>;
#include <SoftwareSerial.h>;
SoftwareSerial mySerial (7, 8);
Servo myservo;
int pos = 20;
int LED = 12;
int BUZZER = 13;
int LPG_sensor = 3;// MQ-6 SENSOR
int LPG_detected;
char msg;
void setup()
{
mySerial.begin (9600) ;
Serial.begin (9600) ; // start serial debugging
myservo.attach(11);
Serial.begin(9600);
pinMode(LED, OUTPUT);
pinMode(BUZZER, OUTPUT);
pinMode(LPG_sensor, INPUT);
myservo.write(pos);
}
void loop()
{
LPG_detected = digitalRead(LPG_sensor);
Serial.println(LPG_detected);
if (LPG_detected == 1)
{
Serial.println("LPG detected...");
digitalWrite(LED, HIGH);
digitalWrite(BUZZER, HIGH);
myservo.write(pos+160);
delay(1000);
mySerial.println("AT+CMGF=1");
delay(1000);
mySerial.println("AT+CMGS=\"+91**********\"\r");//10-digit mobile number
delay(1000);
mySerial.println("GAS LEAKAGE");//message which we want to send as an alert
delay(100);
mySerial.println((char)26);
delay(1000);
}
else
{
Serial.println("No LPG detected");
digitalWrite(LED, LOW);
digitalWrite(BUZZER, LOW);
myservo.write(pos);
}
}
