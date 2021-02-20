class Student:  # Class

    number_of_students = 0 # Class variable

    def __init__(self, fname, lname, email): # inititalizing the parameters
        self.fname = fname  # giving the instance ( self) the values of the parameter
        self.lname = lname
        self.email = email

    number_of_students = number_of_students + 1

    def fullname(self):  # METHOD which uses instance of object
        print(self.fname + self.lname + " rocks")
    

student_1 = Student('Aryan','Gupta', 'aryangupta973@gmail.com')
print(student_1.fname)
print(student_1.email)
student_1.fullname()  # object instance has to call the method
print(Student.number_of_students)


def name(): # FUNCTION doesnt uses classes or objects
    print(" I DONT have access to object or the class, so i Cant print the name.")

name()  # function can be called aise hi