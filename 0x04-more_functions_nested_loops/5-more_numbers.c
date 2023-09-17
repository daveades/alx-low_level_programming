#include "main.h"

/**
 * more_numbers - prints num from 1 to 14 to stdout
 */

void more_numbers(void)
{
	int num_of_times;

	for (num_of_times = 1; num_of_times <= 10; num_of_times++)
	{
		int counter;
		char unit, tens;

		unit = '0';
		tens = '1';
		counter = 0;
		while (counter < 15)
		{
			_putchar(unit);
			unit++;
			counter++;
			if (counter >= 10 && counter < 15)
			{
				_putchar(tens);
				if (unit > '9')
				{
					unit = '0';
				}
			}
		}
		_putchar('\n');
	}
}
