#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0 && year)
	{
		printf("%d Is a leap year",year);
	}
	else
	{
		printf("%d Is not a leap year",year);
	}
}