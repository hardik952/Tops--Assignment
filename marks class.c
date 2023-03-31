#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter your marks of subjects:\n\n");
	printf("PHYSICS: ");
	scanf("%f",&a);
	
	printf("CHEMISTRY: ");
	scanf("%f",&b);
	printf("MATHS: ");
	scanf("%f",&c);	
	printf("BIOLOGY: ");
	scanf("%f",&d);	
	printf("COMPUTER: ");
	scanf("%f",&e);
	printf("\n"); 
	
	float marks=(a+b+c+d+e)*100/500;
	printf("Your percentage: %f\n\n",marks);
	
	printf("Your grade: ");
	if (marks>75)
	{
		printf("DISTINCTION");
	}
	else if(marks>60)
	{
		printf("FIRST CLASS");
	}
		else if(marks>50)
	{
		printf("SECOND CLASS");
	}
		else if(marks>35)
	{
		printf("PASS CLASS");
	}	
	    else
	    {
	    	printf("BETTER LUCK NEXT TIME SORRY!!!!");
		}	
}
