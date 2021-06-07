/*
  Code written by: Dharmik
  Code for blinking an Onboard Flash LED of ESP32-CAM
  it's an Basic LED blink code using Delay
  Find more on www.TechTOnions.com
*/

#define LED 4 // Defining an LED variable as 4 because our LED is connected to GPIO4
void setup() {
  pinMode(LED, OUTPUT); // Set LED pin as OUTPUT
}

void loop()
{
  digitalWrite(LED, HIGH);    // turn LED ON by writing HIGH 
  delay(1000);                // wait for a second
  digitalWrite(LED, LOW);     // turn LED OFF by writing LOW 
  delay(1000);                // wait for a second
}
