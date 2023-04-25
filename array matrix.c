#include<stdio.h>
// W.A.P. to find out the Max number from given Matrix.
int main()
{
	int mat[3][3],i,j,max=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the element: ");
			scanf("%d",&mat[i][j]);
		}
		printf("\n");
	}
	printf("---------------MATRIX---------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(mat[i][j]>max)
			max=mat[i][j];
		}
	}
	printf("\n The maximum value from above matrix is = %d",max);
	return 0;
}
