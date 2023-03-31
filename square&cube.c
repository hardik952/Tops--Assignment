#include<stdio.h>
int main()
{
	// find square and cube of number which is taken from user. 
	int a,c,d; 
	printf("enter the value of a: ");
	scanf("%d",&a);
	
	c=a*a;
	d=a*a*a;
	printf("square of %d= %d\n",a,c);
	printf("cube of %d= %d\n",a,d);
}
