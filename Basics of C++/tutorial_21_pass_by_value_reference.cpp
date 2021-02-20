/* pass arguments in a function

Pass by value : pass a copy of variable into function -> the value of the original variable doesnt get affected
Pass by reference : Pass the variable's address --> the original variable gets affected

*/
#include<iostream>

using namespace std;

void passbyvalue(int x);
void passbyreference(int *x);

int main()
{
    int betty = 13;
    int sandy = 13;

    passbyvalue(betty);
    passbyreference(&sandy); // --> since we need to pass the address

    cout<<"value of betty is "<<betty<<endl;
    cout<<"value of sandy is "<<sandy<<endl;
    return 0;
}

void passbyvalue(int x)
{
    x = 99;
}

void passbyreference(int *x)
{
    *x = 66;
}