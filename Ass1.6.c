#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character:\n");
	scanf("%c",&ch);
	if(ch >='A'&& ch <='Z')
	{
		printf("The charater is Uppercase: \n");
	} else if(ch>='a' && ch <='z'){
		printf("The character is Lowercase:\n");
	}
	else
	{
		printf("The character is not an alphabet:\n");
	}
}