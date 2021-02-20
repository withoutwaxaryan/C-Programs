// As soon as an object is deleted, the constructor runs.
#include<iostream>

using namespace std;

class Sally
{
    public:
        Sally() // constructor
        {
            cout<<"I am a constructor"<<endl;
        }
        ~Sally() // destructor does not have any parameters, or any return value, and u cant do deconstructor loading. (YOu can do constructor loading)
        {
            cout<<"I am a destructor"<<endl;
        }
};

int main()
{
    Sally object;
    cout<<"yo"<<endl;
    
    return 0;
}