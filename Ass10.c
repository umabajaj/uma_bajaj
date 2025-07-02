#include<stdio.h>
void main()
{
	float Sub1,Sub2,Sub3,Sub4,Sub5,Total,Percentage;
	printf("Enter marks of 5 Subject:80+75+90+85+88\n",&Sub1,&Sub2,&Sub3,&Sub4,&Sub5);
	Total=80+75+90+85+88;
	printf("Total: %f\n",Total);
	Percentage= (80+75+90+85+88/500)*100;
	printf("Percentage:%2f%%",Percentage);
}