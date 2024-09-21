#include<stdio.h>
#include<conio.h>

//Check wether Even or Odd using User Define Funcition


void checkEvenOdd()
{
	int n;
	printf("Check wether Even or Odd using User Define Funcition\n\n\n");
	
	
	printf("Enter n:");
	scanf("%d",&n);
	
	if(n%2==0)
	{
		printf("%d is even",n);
	}
	else
	{
		printf("%d is odd",n);
	}
	
}




void main()

{
	
	checkEvenOdd();
	
	
}