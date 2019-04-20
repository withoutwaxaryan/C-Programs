#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Please Enter First Number ");
	scanf("%d",&a);
	printf("Please Enter Second Number ");
	scanf("%d",&b);
	printf("Please Enter Third Number ");
	scanf("%d",&c);
	if(a>=b && a>=c)
	{
		d=a;
		if(b>=c)
		{
			e=b;
			f=c;
		}
		else 
		{
			e=c;
			f=b;
		}
	}
	else if (b>=a && b>=c)
	{
		d=b;
		if(a>=c)
		{
			e=a;
			f=c;
		}
		else 
		{
			e=c;
			f=a;
		}
	}
	else if ( c>=a && c>=b)
	{
		d=c;
		if(a>=b)
		{
			e=a;
			f=b;
		}
		else
		{
			e=b;
			f=a;
		}
	}
	printf("The Order of the Numbers are %d < %d < %d ",f,e,d);
}