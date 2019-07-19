//print pattern with Nested Recursion
#include<stdio.h>
void display(int);
void pattern(int ivalue)
{
	static int i = 1;
	if (i <=(ivalue+ivalue))
	{
		display(ivalue);
		i++;
		printf("\n");
		pattern(ivalue);
		
	} 
}
void display(int ino)
{
	//static int j = 1;
	if (ino>0)
	{
		printf("*");
		ino--;
		display(ino);
		
	}
	else if(ino>=0)
	{
		printf("*");
		ino++;
		display(ino);
	}
}
int main()
{
	int i = 5;

	pattern(i);
	return 0;
