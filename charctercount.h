//take a string and count its charcters
#include<stdio.h>
int calculateword(char * str)
{
	static int icnt = 0;
	if (*str!='\0')
	{
		icnt++;
		str++;
		calculateword(str);
	}

	return icnt;
}
int main()
{
	int iret = 0;
	char arr[] = "nutanamitdeshmukh";
	iret=calculateword(arr);
	printf("%d", iret);
	return 0;

}