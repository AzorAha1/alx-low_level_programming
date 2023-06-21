#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of a  number.
 * @n: takes input
 *
 * Description - this is the description
 * Return: Always 0 (Success)
 */
void jack_bauer(void) {
    int minute;
    int hour;
    for(hour = 0; hour <= 24; hour++){
        for (minute = 0; minute <= 59 ; minute++)
	{
		printf("%02d:%02d", hour, minute)
	}
	minute = 0;
    }
}
