#include<stdio.h>
// W.A.P.to find out the factorial of given number using function.
int fact(int num);

int main()
{
	int num,factorial;
	printf("Enter your number: ");
	scanf("%d",&num);
	factorial=fact(num);
	printf("\nFactorial of %d is: %d",num,factorial);
	return 0;
}
int fact(int num)
{ 	
    int i,n1=1;
	for(i=1;i<=num;i++)
	{
	n1=n1*i;
   }
	return n1;
}


