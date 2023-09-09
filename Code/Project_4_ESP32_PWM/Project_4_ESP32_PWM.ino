//the number of the LED pin
#define ledPin 4    // 4 corresponds to GPIO4

// setting PWM properties
#define ledChannel 0  //PWM Channel 0  
#define resolution 8  //8-bit resolution，we can control the LED brightness using a value from 0 to 255
#define freq 5000     // PWM signal frequency 5000 Hz 

void setup(){
  // configure LED PWM functionalitites
  ledcSetup(ledChannel, freq, resolution);
  
  // attach the channel to the GPIO to be controlled
  ledcAttachPin(ledPin, ledChannel);
}
 
void loop(){
  // increase the LED brightness
  for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
    // changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);
    delay(15);
  }

  // decrease the LED brightness
  for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
    // changing the LED brightness with PWM
    ledcWrite(ledChannel, dutyCycle);   
    delay(15);
  }
}
