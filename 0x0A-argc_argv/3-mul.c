#include "main.h" 

int _toint(char *strptr);

int main(int argc, char **argv)
{
	int i;
	int number;

	number = 1;
	if (argc != 3)
	{
		printf("error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			number *= _toint(argv[i]);
		}
		printf("%d\n", number);
	}



}

int _toint(char *strptr)
{
	int num;
	int digit;
	int sign;
	int operand;

	sign = 1;
	num = 0;
	while (*strptr != 0)
	{
		if (*strptr == '-')
		{
			strptr++;
			sign = sign * -1;
		}
		digit = (*strptr) - '0';
		num = (num * 10) + digit;
		strptr++;
	}
	operand  = num * sign;
	return (operand);
}
