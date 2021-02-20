#include<stdio.h>
int main()
{
	int i ,count,j;
	printf("The list of Prime Numbers between 1 to 100 are :");
	for(i=1;i<= 100;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d \n",i);
		}
	}
	return(0);
}