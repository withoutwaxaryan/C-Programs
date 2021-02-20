#include <iostream>

using namespace std;

int volume(int l=2, int b=2, int h=2);

int main()
{
    cout<<volume()<<endl;
    cout<<volume(3)<<endl;
    cout<<volume(3,4)<<endl;
    cout<<volume(3,4,1)<<endl;
    return 0;
}

int volume(int l, int b, int h)
{
    int output;
    output = l*b*h;
    return output;
}