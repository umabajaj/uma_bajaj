#include<stdio.h>
void main()
{
	int age;
	printf("Enter the age :\n");
	scanf("%d",&age);
	
	if (age>=18 && age)
	{
		printf("It is eligible for vote");
	}else {
		printf(" It is not eligible for vote");
		}
		
}