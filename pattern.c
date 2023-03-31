#include<stdio.h>
int main()
{
	int i,j,num;
	printf("enter your num: ");
	scanf("%d",&num);
	printf("\n");
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" * ",num);
		}
		printf("\n");
	}
}
