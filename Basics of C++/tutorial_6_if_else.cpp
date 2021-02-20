#include <iostream>

using namespace std;

int main()
{
    int age = 101;

    if (age> 60)
    {
        if (age> 100)
        {
            cout<<"why are you alive?";
        }
        cout<<"YOu are old";
    }
    else if (age < 60 && age >= 18)
    {
        cout<<"Get a job";
    }
    else
    {
        cout<<"haha kiddo";
    }
}