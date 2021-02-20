#include<iostream>

using namespace std;

class Mother // base class
{
    public:
        void sayname()
        {
            cout<<"boro boro"<<endl;
        }
};

class Daughter : public Mother // derived class
{
    public:
        void saysomething()
        {
            cout<<"giving up on u"<<endl;
        }
};

int main()
{
    Daughter girl;
    girl.saysomething();
    girl.sayname();
    return 0;
}
// Only public and protected members get inherited, not private.
// friend can also access public and protected