#include<stdio.h>
int num1,num2;
void input();
void add();
void subtract();
void multiply();
void divide();
int main()
{
	int option;
	char choice;
	do
	{
			printf("Please Enter An Option\n\n");
			printf("1. Addition\n");
			printf("2. Subtraction\n");
			printf("3. Multiplication\n");
			printf("4. Division\n");
			scanf("%d",&option);
			switch(option)
			{
				case 1 : add();
					break;
				case 2 : subtract();
					break;
				case 3 : multiply();
					break;
				case 4 : divide();
					break;
				default : printf("ERROR 404 ");
			}
			printf(" Do you wish to continue ? ");
			scanf(" %c",&choice);
	}while(choice =='y'|| choice== 'Y');

}
void input()
{
	printf("Please Enter Number 1");
	scanf("%d",&num1);
	printf("Please Enter Number 2 ");
	scanf("%d",&num2);
}
void add()
{
	input();
	int sum = num1 + num2;
	printf("The Sum of %d and %d is %d",num1,num2,sum);
}
void subtract()
{
	input();
	int sub= num1 - num2;
	printf("The difference of %d and %d is %d",num1,num2,sub);
}
void multiply()
{
	input();
	int mul=num1*num2;
	printf("The product of %d and %d is %d",num1,num2,mul);
}
void divide()
{
	input();
	int div= num1/num2;
	printf("The quotient of %d and %d is %d",num1,num2,div);
}
