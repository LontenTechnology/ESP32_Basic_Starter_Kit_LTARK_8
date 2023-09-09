char val; // defines variable “val” 
void setup() { 
Serial.begin(115200); //sets baudrate to 115200
} 
void loop() { 
    if (Serial.available() > 0) { 
      val=Serial.read(); //reads symbols assigns to “val”
      if (val == 'L') { //check input for the letter “L”
      Serial.println("Hello World!");//shows “Hello World!”
      }
    }
}
