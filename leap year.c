#include<stdio.h>
int main()
{
	//printf("given year is leap year or not.");
	int a;
	printf("enter the year: ");
	scanf("%d",&a);
	
	if((a%4==0)&&(a%100!=0)||(a%400==0))
	{
		printf("the year is leap year.");
	}
	else
	{
		printf("the year is not leap year.");
	}
}
