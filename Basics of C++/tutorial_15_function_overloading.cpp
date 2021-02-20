#include<iostream>

using namespace std;

void printNumber(int x)
{
    cout<<"Printing integer "<<x<<endl;
}

void printNumber(float x)
{
    cout<<"Printing float "<<x<<endl;
}

int main()
{
    int a = 54;
    float b = 2.67;
    printNumber(a);
    printNumber(b);
    return 0;
}