 /*

 * Disclaimer: this code is "AS IS" and for educational purpose only.
 * 
 */

void setup() {
  /*ANYTHING INSIDE THIS CURLY BRACKETS WILL BE EXCUTED ONCE*/
  pinMode(0, OUTPUT);// connected to diode pin out as positive
}

void loop() {
/*ANYTHING INSIDE THE VOID LOOP WILL BE EXECUTED OVER AND OVER AGAIN*/
  digitalWrite(0,HIGH);// turn lED ON HIGH MEANS THERE IS +5V IN PIN 0
  delay(50);// keep it ON for 3 seconds
  

  digitalWrite(0, LOW);// turn lED OFF 0V
 delay(50);// keep it OFF for 3seconds

}
