// A constructor is a function which gets called automatically as soon as you create an object.
// Constructors never have a return type. The constructor's name is exactly same as the class name.
// Constructors are used to give initial values to variables.
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
        Student(string z) // constructor
        {
            setName(z);
        }
        void setName(string x)
        {
            name = x;
        }

        string getName()
        {
            return name;
        } 
};  // remember this semicolon!


int main()
{
    // creating an object so that the program knows from which class is the function/variable being called.
    // Student object // you cant write this, since now you need to pass parameter for your constructor
    Student object("Aryan");
    cout<<object.getName();
    return 0;
}