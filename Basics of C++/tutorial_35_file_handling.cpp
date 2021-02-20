#include<iostream>
#include<fstream> // for file input output --> work with data in files
using namespace std;

int main()
{
    ofstream aryanfile; // writing data to a file
    ifstream readfile;
    aryanfile.open("tuna.txt"); // opens filee; if file doesnt exist, it gets created

    aryanfile << "i am aryannnnn!\n";
    aryanfile.close(); 
}