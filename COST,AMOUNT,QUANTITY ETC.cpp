#include<stdio.h>

int main()
{
	int cost,quantity,amount,discount,net_amount;
	
	printf("\nEnter the cost : ");
	scanf("\n%d",&cost);
	
	printf("\nEnter the quantity : ");
	scanf("\n%d",&quantity);
	
	amount= cost * quantity;
	discount= 10* amount/100;
	net_amount= amount - discount;
	
	printf("\nBill amount is %d",amount);
	printf("\nDiscount is %d",discount);
	printf("\nAmount to be paid %d",net_amount);
	
	return 0;
}
