#include<stdio.h>
int main()
{
	int a,i,n=1;
	printf("Please Enter a number ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		n=n*i;
	}
	printf("The factorial of %d is %d",a,n);
}