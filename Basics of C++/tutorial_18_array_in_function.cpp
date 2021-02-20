#include <iostream>

using namespace std;

void printArray(int array[], int sizeofarray);

int main()
{
    int aryan[4] = {1, 2, 3, 4};
    printArray(aryan, 4);

}

void printArray(int array[], int sizeofarray)
{
    for (int i =0; i< sizeofarray; i++)
    {
        cout<<array[i]<<endl;
    }
}