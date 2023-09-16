# include "main.h"

int _islower(int c)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			return (1);
			break;
		}
		else
		{
			return (0);
			break;
		}
	}
}
