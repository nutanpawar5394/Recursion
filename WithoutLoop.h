//print 1 2 3 without loop(recurtion)
#include<stdio.h>
void print(int value)
{
	static int i = 1;
	if (i <=value)
	{
		printf("%d", i);

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