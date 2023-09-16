# include "main.h"

int _islower(int c)
{
	char ch;
	int ret_val;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == c)
		{
			ret_val = 1;
			break;
		}
		else
		{
			ret_val = 0;
			break;
		}
	}
	return (ret_val);
}
