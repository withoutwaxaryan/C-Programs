#include<stdio.h>
int main()
{
	int a ,i,j;
	printf("Please enter the number of rows you want ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}