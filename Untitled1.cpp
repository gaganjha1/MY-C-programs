#include<stdio.h>

int main()
{
	int hours,minutes,seconds;
	printf(\nEnter the time in seconds);
	scanf(\n%d,seconds);
	
	minutes=seconds/60;
	seconds=seconds%60;
	
	hours=minutes/60;
	minutes=minutes%60;
printf(\nTime is %d Hours %d Minutes %d seconds);
return 0;
	
}
