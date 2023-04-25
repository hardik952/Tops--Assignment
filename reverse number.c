#include<stdio.h>
//W.A.P. to print the number in reverse order.
int main()
{
	int num,rev=0,rem=0;
	printf("Enter The Number: ");
	scanf("%d",&num);
	while(num!=0){
		rev=rev*10;
		rem=num%10;
		rev=rev+rem;
		num=num/10;
	}
	printf("The Reverse number is= %d",rev);
	return 0;
}
