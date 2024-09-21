#include<stdio.h>
#include<conio.h>


//Find minimum out of 4 numbers


void main()

{
	printf("Find minimum out of 4 numbers\n\n\n\n");
	
	int a,b,c,d;
	
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	printf("Enter d:");
	scanf("%d",&d);
printf("\n\n");
	
	if(a<b)//ab
	{
		if(a<c)//ac
		{
			if(a<d)//ac
			{
				printf("%d is minimum",a);
			}
			else //ad
			{
				printf("%d is minimum",d);
			}
		}
		else//ac
		{
			if(c<d)//cd
			{
				printf("%d is minimum",c);
			}
			else
			{
				printf("%d is minimum",d);
			}
		}
	}
	else//ab
	{
	
		if(b<c)//bc
		{
			if(b<d)//bd
			{
				printf("%d is minimum",b);
			}
			else
			{
				printf("%d is minimum",d);
			}
		}	
		else//bc
		{
			if(c<d)//cd
			{
				printf("%d is minimum",c);
			}
			else
			{
				printf("%d is minimum",d);
			}
			
		}
		
	}
	
	
	
}