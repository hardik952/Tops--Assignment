#include<stdio.h>
int main()
{
	int a,i,num;
	printf("Enter your num: ");
	scanf("%d",&num);
	printf("\n");
	a=0;
	for(i=2;i<=num-1;i++)
	{
		if(num%i==0)
		{
	    a=1;
	    break;
	}
	}
	if(a==0) printf("The num is prime.");
	else printf("The num is composite.");
}
