#include<stdio.h>
//W.A.P. make a summation of given number.
int main()
{
	int num,sum=0;
	printf("Enter your number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		sum=sum+num%10;     // for remainder and addition
		num=num/10;
	}
	printf("The summation of given number is: %d",sum);
	return 0;
}
