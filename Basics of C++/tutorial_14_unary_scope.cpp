// helps to differ usage between global and local variables
#include <iostream>

using namespace std;

int tuna = 69; // global variables can be used in any function

int main()
{
    int tuna = 20; // local variables can only be used in the function defined
    cout<<tuna<<endl; // will take local scope
    cout<<::tuna<<endl; // will take global scope
}