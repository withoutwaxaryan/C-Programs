#include<stdio.h>
int main()
{
	int a,i,s=0;
	printf("Please Enter a Natural Number ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		s=s+i;
	}
	printf("The Sum of the First %d Natural Numbers is %d ",a,s);
	return 0;
}