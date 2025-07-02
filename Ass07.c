#include<stdio.h>
void main()
{
	int minutes, hours, remainminutes;
	printf("Enter Time :135 min\n",&minutes,&hours,&remainminutes);
	hours = 135/60;
	remainminutes = 135%60;
	printf("hours:%d\n",hours);
	printf("remain minutes:%d\n",remainminutes);
}