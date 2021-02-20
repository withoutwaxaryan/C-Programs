#include<iostream>
#include<string>

using namespace std;

int main()
{
    string  s1("hello dear, you've been pulling me closer");
    cout<<s1.substr(17, 7)<<endl;

    string s2("hello lol");
    string s3("bye bye");
    cout<<s2<<s3<<endl;
    s2.swap(s3);
    cout<<s2<<s3<<endl;

    // s2.find("e");
    // s3.rfind("e");
}