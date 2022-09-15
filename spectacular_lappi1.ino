#define echoPin 2 
#define trigPin 3

long duration; 
int distance;
  
void setup()
 {
    pinMode(trigPin, OUTPUT); 
    pinMode(echoPin, INPUT); 
    Serial.begin(9600);
 }
 void loop()
 {
   
   // clears the trigpin condition
   digitalWrite(trigPin, LOW); 
   delayMicroseconds (2);
   // sets the trigPin HIGH (ACTIVE) for 10 microseconds
   digitalWrite(trigPin, HIGH); 
   delayMicroseconds (10); digitalWrite(trigPin, LOW); 
   // Reads the echopin, returns the sound wave travel time in microseconds 
   duration = pulseIn(echoPin, HIGH); 
   // calculating the distance
   distance = duration * 0.034 / 2; // speed of sound wave divided by 2 (go and back) 
   // Displays the distance on the Serial Monitor 
   Serial.print("Distance: "); 
   Serial.print(distance); 
   Serial.println(" cm");
 }