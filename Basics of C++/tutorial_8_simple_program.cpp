#include<iostream>

using namespace std;

int main()
{
    int count =0, sum = 0, a;
    while(count < 5)
    {
        cin>>a;
        sum = sum + a;
        count ++;
    }
    cout<<sum;
    return 0;
}