#include<iostream>

using namespace std;

int main()
{
    int a;
    float b;
    double c;
    char d;
    double bucky[10];
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(bucky)<<endl;

    // In array , memory location is contiguous , unlike variable memory location
    double *pointer1 = &bucky[0];
    double *pointer2 = &bucky[1];
    double *pointer3 = &bucky[2];
    cout<<pointer1<<endl;
    cout<<pointer2<<endl;
    cout<<pointer3<<endl;

    // adding stuff to pointer doesnt change the memory address, it only changes the element it is pointing to.
    pointer1 +=2; // --> the memory location wont change by 2 units. the pointer will shift to [0 + 2], i.e. memory location of bucky[2]
}