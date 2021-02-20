#include<iostream>

using namespace std;

int main()
{
    const int x = 3; // now you cant modify it; constant variables need constant functions
    // x =5; will give error
    // you can also const functions, objects too. Constant objects can only call constant functions
}