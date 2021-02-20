// friend is something that i totally different from the class, but it has access to stuff inside the class.
#include<iostream>
using namespace std;


class Sally
{
    public:
        Sally()
        {
            var = 0;
        }
    private:
        int var;

    friend void friendfunction(Sally &object); // since its a friend function, we dont define it in the class, just prototype it here.
};

void friendfunction(Sally &object)
{
    object.var = 99;
    cout<<object.var<<endl;
}
int main()
{
    Sally object;
    friendfunction(object);
    return 0;
}