#include<stdio.h>

int main()
{
float R,A,C;
printf("\nEnter the radius");
scanf("%f",&R);
A = 3.14*R*R;
C = 2*3.14*R;
printf("\nthe area of circle is %f",A);
printf("\nthe circumference of circle is %f",C);
	return 0;
}
