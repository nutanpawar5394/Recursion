//accept number and multiplication of each digit
#include<stdio.h>
int multiplication(int ino)
{
	static int imul = 1;
	static int idigit = 0;
	if (ino != 0)
	{
		idigit = ino % 10;
		if (idigit % 2 == 0)
		{
		imul = imul*idigit;
		}
		ino=ino/10;
		multiplication(ino);
	}
		return imul;
}
int main()
{
	int iret = 0;
	int ino = 67832;
	iret = multiplication(ino);
	printf("%d", iret);
	return 0;

