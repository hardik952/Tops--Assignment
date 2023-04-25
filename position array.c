#include<stdio.h>
//W.A.P. of find the element of given position from the array.
int main()
{
	int a,num[10]={23,1,32,12,56,4,67,50,45,22},i;
	for(i=0;i<10;i++)
	{
	printf("%d ",num[i]);
    }
	printf("\nEnter the position in array: ");
	scanf("%d",&a);
	printf("The element in at position %d is= %d",a,num[a-1]);
	return 0;
}
