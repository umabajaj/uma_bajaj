#include<stdio.h>

int main(){
	
	int num , first ,last;
	
	printf("Enter Any Three Digit Number:");
	scanf("%d",&num);
	
	first = num/100;  
	last = num%10;   
	
	if(first==last)
	{
		printf("Given Number is Pollindrome!\n");
	}
	else
	{
		printf("Given Number is not a Pollindrome!");
		
	}
	
	return 0;
	}