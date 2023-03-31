#include<stdio.h>
int main()
{
	// Calculate simple interest and compound interest of amount of user.
	
	float p,r,t,n;
	printf("Enter your principal: ");
	scanf("%f",&p);
	printf("Enter your rate of interest: ");
	scanf("%f",&r);
	printf("Enter time: ");
	scanf("%f",&t);
		
	float a;
	a=(p*r*t)/100;
	printf("your simple interest is : %f\n",a);
}
