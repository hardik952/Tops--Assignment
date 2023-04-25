#include<stdio.h>
// W.A.P. to print the Fibonacci series using function.
int fibo(int num);
int main()
{
	int num,num1,fibonacci;
	printf("Enter your number: ");
	scanf("%d",&num);
	printf("\nFibonacci series of given number is: \n\n");
	fibonacci=fibo(num);
	return 0;
}
int fibo(int num)
{
	int i,n1=0,n2=1,n3;
	printf("%d %d",n1,n2);
	for(i=2;i<num;i++)
	{
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;
	}
	return n3;
}
