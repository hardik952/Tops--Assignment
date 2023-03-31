#include<stdio.h>
int main()
// calculate the area of different shapes.
{
	char shape;
	printf("Select your shape for find the area:\n\n");
	printf("Rectangle(r)    Circle(c)    Triangle(t)    Square(s)\n\n");
	printf("Enter your character for area: ");
	scanf("%c",&shape);
	printf("\n");
	float area,length,width,radius,base,height;
	
	switch (shape)
	{
		case ('r'):	
            printf("Enter your lenght and width: ");
		    scanf("%f%f",&length,&width);
		    printf("\n");		
		   area= length*width;
		   printf("Area of rectangle= %f",area);
		   break;
		   
		case ('c'):
		    printf("Enter your radius: ");
		    scanf("%f",&radius);
			printf("\n");		
		   area= 3.1428*radius*radius;
	       printf("Area of circle= %f",area);
	       break;
		   		  
		case ('t'):
			printf("Enter your base and hight: ");
			scanf("%f%f",&base,&height);
			printf("\n");
		   area= 0.5*base*height;
		   printf("Area of triangle= %f",area);
		   break;
		   
		case ('s'):
			printf("Enter your length: ");
			scanf("%f",&length);
			printf("\n");
		   area= 0.5*length*length;
		   printf("Area of square= %f",area);
		   break;  
		   
		default :
			printf("PLEASE SELECT VALID CHARACTER.");
	}
}
