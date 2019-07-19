//write a code to find a string length with our own function
#include<stdio.h>
int strlenx(char * str)
{
	static int icnt = 0;
	if (*str!='\0')
	{
		icnt++;
		str++;
		strlenx(str);
	}
	return icnt;
}
int main()
{
	int iret = 0;
	char ch[] = "HelloWorlds";
	iret=strlenx(ch);
	printf("%d", iret);
	return 0;
}