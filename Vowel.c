#include<stdio.h>
int main()
{
	char a;
	printf("Please Enter an Alphabet");
	scanf("%c",&a);
	switch(a)
	{
		case 'a': 
		case 'A':
		case 'e':
		case 'E': 
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'U':
		case 'u': printf("Vowel");
			break;
		default : printf("Consonant");
	}
}