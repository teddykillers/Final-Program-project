#include <stdio.h>   
#include <wiringPi.h>


int main(void)
{
	wiringPiSetup(); // Initializes wiringPi using wiringPi's simlified number system.
	
	pinMode(0,INPUT);
	pinMode(1,INPUT);

	while(1)
	{
		if (digitalRead(0) == 1 && digitalRead(1) == 1)
        {
		printf("Madras drink is selected");
		}
		
		else if (digitalRead(0) == 1 && digitalRead(1) == 0)
        {
        printf("Cranberry Vodka Drink is selected")
        }

        else if (digitalRead(0) == 0 && digitalRead(1) == 1)
        {
        printf("Screwdriver Drink is selected")
        }
    }

}