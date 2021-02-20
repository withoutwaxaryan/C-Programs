#include<iostream>

using namespace std;

int main()
{
    try
    {
        int moms_age = 34;
        int sons_age = 45;

        if (sons_age> moms_age)
        {
            throw 99; // error message
        }
    }
    catch(int x)
    {
        cout<<"son cannot be older than mom";
    }
    
}