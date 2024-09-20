#include<stdio.h>

int main()
{
	int num, i, fact = 1;
	printf("\nEnter a number :");
	scanf("%d",&num);
	for(i=num; i>=1; i--)
	{
		fact *= i;
	}
	printf("\nFactorial of %d is %d",num,fact);
	
	return 0;
}
