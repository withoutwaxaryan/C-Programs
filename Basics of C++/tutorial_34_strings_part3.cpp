#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s1("Hello, i am aryan");
    cout<<s1<<endl;

    s1.replace(10, 2, "lore");
    cout<<s1<<endl;

    s1.insert(11, "hello");
    cout<<s1<<endl;
}