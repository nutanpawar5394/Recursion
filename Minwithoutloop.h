//find minimum value form array without using loop
#include<stdio.h>
int array(int arr[])
{
	static int i = 0,imin=arr[0];
	
	//static int idigit = 0;
	if (arr[i]!= 0)
	{
		if (imin < arr[i])
		{
			imin = arr[i];
		}
		i++;
		array(arr);
	}
	return imin;
}
int main()
{
	int iret = 0;
	int arr[] = {7,5,3,9,10};
	iret = array(arr);
	printf("%d", iret);
	return 0;
}