#include<iostream>

using namespace std;

int main()
{
    int bucky[5] = {1, 2, 3, 4, 5}; // array is basically a variable that can store multiple values
    int aryan[9];
    cout<<bucky[0]<<endl;
    cout<<bucky[3]<<endl;
    cout<<bucky[4]<<endl;

    for (int i=0; i<9; i++)
    {
        cin>>aryan[i];
    }
    for (int i = 0; i<9; i++)
    {
        cout<<aryan[i]<<endl;
    }
    return 0;
}