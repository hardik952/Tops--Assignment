#include<stdio.h>
// W.A.P. to sort the array of 5 elements.
int main()
{
	int i,j,num[5],temp=0;
	for(i=0;i<5;i++)
	{
	printf("Enter your %d number: ",i+1);
	scanf("%d",&num[i]);
    }
    printf("\nYour Values are: \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(num[j]<num[i]){
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	printf("\n\nYour Values after sorting: \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);
	}	
	return 0;
}
