#include <stdio.h>
#include <wiringPi.h>
// LED Pin - wiringPi pin 24 is Odroid-C1 GPIO 97.
#define LED     24

int main(void) {
	printf("Blink!\n") ;
		wiringPiSetup();                      // ? note the setup method chosen
	pinMode(LED, OUTPUT);

	for (;;) {
		digitalWrite(LED, HIGH);  // On
		delay(500);                        // mS
		digitalWrite(LED, LOW);   // Off
		delay(500);
	}
	return 0;
}
