#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter number of term: ");
	scanf("%d",&num);
	int n1,n2,n3;
	n1=0,n2=1;
	printf("\n%d %d",n1,n2);
	
	for(i=2;i<num;i++)
	{
		n3=n1+n2;
		printf(" %d",n3);
		n1=n2;
		n2=n3;

	}
	
	
}
