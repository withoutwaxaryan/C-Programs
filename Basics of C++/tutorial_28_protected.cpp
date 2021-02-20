#include<iostream>

using namespace std;

class Mother // base class
{
    public:  // everyone has access to it
        int public_var;
    private: // only this class has access to it
        int private_var;
    protected: // protected members can be accessed by derived classes
        int protected_var;
};

class Daughter : public Mother // derived class
{
    public:
        void saysomething()
        {
            public_var = 1;
            protected_var =2;
            //private_var = 3; 
        }
};

int main()
{
    return 0;
}