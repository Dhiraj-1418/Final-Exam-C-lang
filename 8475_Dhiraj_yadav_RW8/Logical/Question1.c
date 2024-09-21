#include<stdio.h>
#include<conio.h>



//WAP to print odd number from 1 to N using while loop.

void main()

{
	printf("WAP to print odd number from 1 to N using while loop.\n\n\n");
	
	int a=1,n;
	
	printf("Enter :");
	scanf("%d",&n);
	
	while(a<=n)
	{
		if(a%2==1)
		{
		printf("%d ",a);
		}a++;
	}
	
	
}