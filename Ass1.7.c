#include<stdio.h>
void main()
{
	int basic, da,hra,ta,Total;
	printf("Enter basic salary:");
	scanf("%d",&basic);
	if(basic==5000){
		da=basic*0.10;
		ta=basic*0.20;
		hra=basic*0.25;
	}
	else
	{
		da=basic*0.15;
		ta=basic*0.25;
		hra=basic*0.30;
	}
	Total=basic+da+hra+ta;
	printf("Total salary=%d\n",Total);
}