// SIT210 2.1P Task - Morse Code

int led1 = A5; // Separate LED on board
int led2 = D7; // This one is the little blue LED on your board. On the Photon it is next to D7, and on the Core it is next to the USB jack.


void setup() {

  // We are going to tell our device that D0 and D7 (which we named led1 and led2 respectively) are going to be output
  // (That means that we will be sending voltage to them, rather than monitoring voltage that comes from them)
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).  The built-in delay function shown below safely interleaves required background activity, so arbitrarily long delays can safely be done if you need them.

void loop() {
  // Assume a long blink is 1 second (1000ms) and a short blink is .25 seconds (250ms)
  
  // Letter C is long blink, short blink, long blink, short blink
  digitalWrite(led1, HIGH); // HIGH = ON
  digitalWrite(led2, HIGH);
  delay(1000); // 1 second for long blink

  digitalWrite(led1, LOW); // LOW = OFF
  digitalWrite(led2, LOW);
  delay(1000); // 1 SECOND
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // .25 seconds for short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000); // long blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(2500); // 2.5 seconds to signify the end of a letter
  
  // Letter H is 4 short blinks
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250);
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(2500);
  
  // Letter R is short blink, long blink, short blink
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000); // long blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(2500);
  
  // Letter Y is long blink, short blink, long blink, long blink
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000); // long blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000); // long blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000); // long blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(2500);
  
  
  // Letter S is 3 short blinks
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(2500);
  
  // Letter E is 1 short blink
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(2500);
  
  
  // Letter L is short blink, long blink, short blink, short blink
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000); // long blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(2500);
  
  
  
  // Letter A is short blink, long blink
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(250); // short blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(1000);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  delay(1000); // long blink
  
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  delay(3000); // complete name

  // And repeat!
}

