#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please Enter The First Number");
	scanf("%d",&a);
	printf("Please Enter the Second Number");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf(" The Swapped Values are %d and %d",a,b);
	return(0);
}
