#include<stdio.h>
void main()
{
	int a,b,temp;
	printf("enter first number(a): ");
	scanf("%d",&a);
	printf("enter second number(b): ");
	scanf("%d",&b);
	temp= a;
	a=b;
	b=temp;
	printf("After swaping:\n");
	printf("%d\n",a);
	printf("%d\n",b);
	} 