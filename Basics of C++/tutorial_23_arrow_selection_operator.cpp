#include<iostream>

using namespace std;

class Sally
{
    public:
        void printcrap()
        {
            cout<<"yo yo"<<endl;
        }
};

int main()
{
    Sally object;
    Sally *pointer = &object; // datatype is sally since it belongs to that class

    object.printcrap();
    pointer->printcrap(); // whenever you use pointer to access members of a class, u use arrow, instead of dot operator

}