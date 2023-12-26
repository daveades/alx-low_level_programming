#include "main.h"
/**
* set_string - Sets the value of a pointer to a char.
* @s: Double pointer to a string.
* @to: Pointer to a string.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
