#include <iostream>
#include "Student.h"

// Compile: g++ --std=c++14 Student.cpp studentDemo.cpp -o student.exe

int main()
{
    // create student
    Student aStudent = Student(1,"Diane", "Ricciardella", "1380 Lawrence st", 3151408);

    //check that it worked
    aStudent.getStudent();

    //create another student
    Student bStudent = Student(2, "testfname", "testlname", "testaddress", 3151404);

    bStudent.getStudent();

    //change that student
    bStudent.setStudent();

    std::cout << "\nLook closely at the output and the input" << std::endl;

    bStudent.getStudent(); // look closely at the output.

    bStudent.setStudent1(); // correcting the address problem

    bStudent.getStudent(); // problem is corrected.
    return 0;
}