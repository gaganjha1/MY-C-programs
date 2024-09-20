#include<stdio.h>

int main()
{
	int num,i,count = 0;
	printf("\nEnter a number :");
	scanf("%d",&num);
	
	for(i=2; i<num; i++)
	{
		if (num % i == 0)
		{
			printf("\n %d",i);
			count++;
			break;
		}
	}
	if(count == 0)
	printf("\n%d is a prime number",num);
	else
	printf("\n%d is not a prime number",num);
	
	return 0;
}
