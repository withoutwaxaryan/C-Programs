# University has some stuff which can be used by both Teachers and Student. THerefore we can use inheritance to reuse code
class University: 
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname

    def fullname(self):
        print(self.fname + ' ' + self.lname)


class Student(University):
    pass


class Teacher(University):
    def __init__(self, fname, lname, salary):
        super().__init__(fname, lname)
        self.salary = salary

student_1 = Student('Aryan', 'Gupta')
teacher_1 = Teacher('Shobha', 'Bagai', '1cr')

print(student_1.fname)
print(student_1.lname)
print(teacher_1.lname)
print(teacher_1.salary)
