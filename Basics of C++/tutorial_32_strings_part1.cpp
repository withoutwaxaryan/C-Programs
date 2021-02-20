#include<iostream>
#include<string> 
// note : string.h -- > is a C file, not C++

using namespace std;

int main()
{
    string aryan, x;
    cin>>aryan; // only the first word will be accepted in the string, since cin takes the text before whitespace
    cout<<" The string entered is "<<aryan<<endl;

    // to accept a whole line as a string
    // getline(cin, x);
    // cout<<"THe line is "<<x<<endl;

    string s1, s2;
    s1 = "hello";
    s2.assign(s1); // copies s1 to s2

    string s3 = "hellololomg";
    cout<<s3.at(4)<<endl; // prints 5th character

    for (int x=0; x< s3.length(); x++)
    {
        cout<<s3.at(x)<<endl;
    }
}