#include <string>
#include <iostream>
#include "Student.h"

Student::Student(int sid, std::string fName, std::string lName,std::string address, int phone):
                sid{sid}, fName{fName}, lName{lName},address{address}, phoneNumber{phone}
{
//intentionally left blank
}

void Student::getStudent()
{
   std::cout << "\n\nThe Student with ID #: " << getSID() << " is called "<< getFName() << ' '<< getLName()
             << "\nContact Info: " << getAddress() << " | " << getPhone() << " | " << std::endl;

}
int Student::getSID()
{
    return sid;
}

std::string Student::getFName()
{
    return fName;
}

std::string Student::getLName()
{
    return lName;
}

std::string Student::getAddress()
{
    return address;
}

int Student::getPhone()
{
    return phoneNumber;
}


void Student::setSID(int aSid)
{
    sid = aSid;
};

void Student::setFName(std::string aName)
{
    fName = aName;
};

void Student::setLName(std::string aName)
{
    lName = aName;
};

void Student::setAddress(std::string anAddr)
{
    address = anAddr;
};
void Student::setPhone(int aPhone)
{
    phoneNumber = aPhone;
};

void Student::setStudent()
{
    std::cout << "Enter the SID: ";
    std::cin >> sid;
    std::cout << "Enter the first name : ";
    std::cin >> fName;
    std::cout << "Enter the last name : ";
    std::cin >> lName;
    std::cout << "Enter the phone number : ";
    std::cin >> phoneNumber;
    std::cout << "Enter the address : ";
    std::cin >> address;
}

void Student::setStudent1()
{
    std::cout << std::endl;
    std::cout << "Enter the SID: ";
    std::cin >> sid;
    std::cout << "Enter the first name : ";
    std::cin >> fName;
    std::cout << "Enter the last name : ";
    std::cin >> lName;
    std::cout << "Enter the phone number : ";
    std::cin >> phoneNumber;
    std::cin.ignore(); // removes a \n from the buffer.
    std::cout << "Enter the address : ";
    std::getline(std::cin, address); // allows us to capture spaces.


}