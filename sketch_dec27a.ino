//Find the table of temperature vs ADC reding in the datasheet 
//Build a second order polynomial equation using Octave or Matlab

void setup() 
{
   ADMUX = 0b11001000;
   ADCSRA = 0b10000111;
   Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() 
{
  ADCSRA |=(1<<ADSC);
  delay(100);
  float x = ADC;
  float a = -0.0000089219*x;
  a = a*x;
  float b = 0.78867*x;
  float c = -251.51;
  float y = a + b + c; 
  Serial.println(y); 
}

//Use ISR Function for better efficiency
