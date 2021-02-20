// pointer is a special type of pointer that contains a memory address as a value
#include<iostream>

using namespace std;

int main()
{
    int fish = 5;
    cout<<&fish<<endl; //& gives u the address where the variable is stored in memory

    int *fishpointer; // declaring a pointer, the pointer type should be same as that of the variable whose memory it is storing
    
    fishpointer = &fish; //You dont need to add * again after declaring the pointer

    cout<<"Address of "<<fish<<" is "<<fishpointer<<endl;
    return 0;
}