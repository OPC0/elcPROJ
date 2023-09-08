const int RLED = 9; //Blue LED cathode on pin 9
const int GLED = 10; //Green LED cathode on pin 10
const int BLED = 11; //Blue LED cathode on pin 11
//const int BUTTON = 2; //The Button is connected to pin 2
const int potPin = A1;

//boolean lastButton = LOW; //Last button state
//boolean currentButton = LOW; //Current button state
//int ledMode = 0;             //Cycle between LED states


void setup() {
  // put your setup code here, to run once:
  pinMode(RLED, OUTPUT);
  pinMode(GLED, OUTPUT);
  pinMode(BLED, OUTPUT);
  //pinMode(BUTTON, INPUT);
}

/*
 *Debouncing function
 *Pass it to the previous state
 *and get back to the current debounced state
 */

/*boolean debounce (boolean last)
{
  boolean current = digitalRead(BUTTON);
  if (last != current)
  {
    delay(5);
    current = digitalRead(BUTTON);
  }
  return current;
}


void setMode(int mode)
{
 //RED
 if (mode==1)
 {
  digitalWrite(RLED, LOW);
  digitalWrite(BLED, HIGH);
  digitalWrite(GLED, HIGH);
 }
 else if (mode == 2)
 {
  digitalWrite(RLED, HIGH);
  digitalWrite(BLED, HIGH);
  digitalWrite(GLED, LOW);
 }
 else if(mode==3)
 {
  digitalWrite(RLED, HIGH);
  digitalWrite(BLED, LOW);
  digitalWrite(GLED, HIGH);
 }
}
*/
void loop() {
  /*currentButton = debounce(lastButton);
  if (lastButton == LOW && currentButton == HIGH)
  {
    ledMode++;
  }
  lastButton = currentButton;

if (ledMode == 3) ledMode = 0;
setMode(ledMode);
}
*/
  // put your main code here, to run repeatedly:
int potValue = analogRead(potPin);

//Map potentiometer value to LED brigtness (0 - 255)
int brightness = map(potValue, 0, 1023, 0, 255);
analogWrite(RLED, brightness);
analogWrite(BLED, brightness);
analogWrite(GLED, brightness);
}