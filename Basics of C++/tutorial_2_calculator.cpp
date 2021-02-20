#include <iostream>

using namespace std;

void printSomething(); // prototyping a function- letting the compiler know that this function exists and will be defined later
void printNumber(int);
int addNumbers(int, int);

int main()
{
    int a, b, sum, subtract, product, quotient, remainder;

    // arithmetic operators
    cout<<"Enter a number"<<endl;
    cin>>a>>b; // input stream object
    sum = a + b;
    subtract = a - b;
    product = a * b;
    quotient = a/b;
    remainder = a % b;

    cout<<sum<<endl<<subtract<<endl<<product<<endl<<quotient<<endl<<remainder;

    cout<<endl;

    // relational operators
    if(3>1)
    {
        cout<<"Aryan rocks";
    }
    
    if (3 == 3){ // != , >, < , = etc
        cout<<"lol";
    }

    printSomething();
    printNumber(23);

    cout<<addNumbers(46,22)<<endl;
    return 0;
}

void printSomething()
{
    cout<<"YO";
}

void printNumber(int x)
{
    cout<<"Fav number is "<<x<<endl;
}

int addNumbers(int x, int y)
{
    int answer;
    answer = x + y;
    return answer;
}