//print * without loop

#include<stdio.h>
void print(int value)
{
	static int i = 1;
	if (i <value)
	{
		printf("*");

		i++;
		print(value);
	}
}
int main()
{

	int value = 5;
		print(value);
	return 0;
}
