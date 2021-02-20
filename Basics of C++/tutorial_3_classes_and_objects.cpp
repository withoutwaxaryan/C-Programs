# include<iostream>
# include<string>

using namespace std;

class Student  // grouping similar functions variables related to each other in one 'class'
{
    // never make class variables public. Keep them private, and use a public class function
    // to access private variables
    private:
        string name;
    public: // access specfier --> public means can be used outside the class
        void setName(string x)
        {
            name = x;
        }

        string getName()
        {
            return name;
        } 

        void coolSaying()
        {
            cout<<"All is well"<<endl;
        }
};  // remember this semicolon!


int main()
{
    // creating an object so that the program knows from which class is the function/variable being called.
    Student object; // this is how you create an object in C++
    object.coolSaying();  // dot separator to access class stuff
    object.setName("yoyo");
    // object.name  -- this is inaccessible since its a private variable. --> use public function
    cout<<object.getName();
    return 0;
}