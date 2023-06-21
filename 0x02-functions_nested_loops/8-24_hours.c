#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print last digit of a  number.
 * @void: takes nothing
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
void jack_bauer(void) {
    int minute = 0;
    int hour = 0;
	
	while (hour < 24)
	{
	while (minute <= 59)
	{
		printf("%02d:%02d\n", hour, minute);
		minute++;
	}
		minute = 0;
		hour++;
	}
}
