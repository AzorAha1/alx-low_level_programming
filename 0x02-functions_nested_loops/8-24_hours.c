#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print last digit of a  number.
 * @n: takes input
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
void jack_bauer(void) {
    int minute;
    int hour;
	
    while (hour < 24)
    {
	    minute = 0;
	    hour++;
	    while (minute <= 59)
	    {
		    printf("%02d:%02d", hour, minute);
		    minute++;
	    }

    }
}
