//accept number and addition of each digit
#include<stdio.h>
int addition(int ino)
{
	static int isum = 0;
	if (ino != 0)
	{
		isum = isum + (ino % 10);
		printf("isum is now %d", isum);
		ino = ino / 10;
		addition(ino);
	}

	return isum;
}
int main()
{
	int i = 784;
	int iret = 0;
	iret=addition(i);
	printf("%d", iret);
	return 0;

}