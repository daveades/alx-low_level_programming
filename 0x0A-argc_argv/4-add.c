#include "main.h"

int _toint(char *strptr, int *validptr);

/**
 * main - add command line args
 * @argc: arg count
 * @argv: array(pointer to) of pointers to strings(command line args)
 *
 * Return: 0 or 1 depending on isvalid and 0 if args == 0(excluding argv[0])
 */
int main(int argc, char **argv)
{
	int isvalid;
	int number;
	int i;

	number = 0;
	isvalid = 1;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isvalid)
			{
				number += _toint(argv[i], &isvalid);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", number);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}

/**
 * _toint - converts ascii to int (atoi)
 * @strptr: pointer to strings
 * @validptr: pointer to flag that sets it to zero for illegal arg types
 *
 * Return: converted string
 */
int _toint(char *strptr, int *validptr)
{
	int num;
	int digit;

	num = 0;
	while (*strptr != 0)
	{
		if (*strptr < 48 || *strptr > 57)
		{
			*validptr = 0;
		}
		else
		{
			digit = *strptr - '0';
			num = (num * 10) + digit;
			strptr++;
		}
	}
	return (num);
}


