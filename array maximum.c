#include<stdio.h>
// W.A.P. to find out the max number from given 10 elements of array.
int main()
{
	int i,num[10],max=0;
	for(i=0;i<10;i++)
	{
		printf("enter your %d element: ",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<=10;i++)
	{
	    if(num[i]>max)
		max=num[i];	
	}
	printf("Your Maximum Number: %d",max);
	return 0;
}
