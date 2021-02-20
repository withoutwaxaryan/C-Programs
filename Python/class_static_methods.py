class Student:  # Class

    number_of_students = 0 # Class variable

    def __init__(self, fname, lname, email): # inititalizing the parameters
        self.fname = fname  # giving the instance ( self) the values of the parameter
        self.lname = lname
        self.email = email

    number_of_students = number_of_students + 1

    def fullname(self):  # METHOD which uses instance of object
        print(self.fname + self.lname + " rocks")

    @classmethod
    def from_string(cls, data_string):
        fname, lname, email = data_string.split('-')
        return fname, lname, email

    @staticmethod
    def print_students():
        print(Student.number_of_students)


    
student_string = 'Aryan-Gupta-aryangupta973@gmail.com'
student = Student.from_string(student_string)
print(student)
Student.print_students()