#include<iostream>

using namespace std;

class Mother // base class
{
    public:
        Mother()
        {
            cout<<"Mother Constructor"<<endl;
        }
        ~Mother()
        {
            cout<<"Mother Deconstructor"<<endl;
        }
};

class Daughter : public Mother // derived class
{
    public:
        Daughter()
        {
            cout<<"Daughter Constructor"<<endl;
        }
        ~Daughter()
        {
            cout<<"Daughter Deconstructor"<<endl;
        }
};

int main()
{
    Mother mom;
    Daughter girl;
    return 0;
}
// The derived classes do not inherit the base class constructors, but yes, when we invoke the derived class, all base classes constructors destructors are called

/*
Mother Constructor
Mother Constructor
Daughter Constructor
Daughter Deconstructor
Mother Deconstructor
Mother Deconstructor
*/ 

// Note the order of constructor and destructor calling
// base classes are constructed first, but their deconstructor is called at the end.