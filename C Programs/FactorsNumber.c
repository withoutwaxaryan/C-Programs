#include<stdio.h>
int main()
{
	int a,i,j=0,b[100];
	printf("Please Enter a Number ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			b[j]=i;
			j++;
		}
	}
	printf("The Factors of %d are ",a);
	for(i=0;i<j;i++)
	{
		printf("%d\n",b[i]);
	}
}