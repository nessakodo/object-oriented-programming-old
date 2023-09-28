//Demo file for the Date class.
//demoDate.cpp

#include <string>
#include <iostream>
#include "Date.h"

int main()
{
    // declares variables for use in testing 
    // these are not the same as the ones used in the class.
    int day;
    int month;
    int year;

    // Create the variable aDate using the Date constructor and initialize
    Date aDate = Date(2023, 8, 31);

    //test the getters
    std::cout << "The month is " << aDate.getMonth()<< std::endl;
    std::cout << "The day is " << aDate.getDay()<< std::endl;
    std::cout << "The year is " << aDate.getYear()<< std::endl;

    std::cout << "The date is : " << aDate.getDate() << std::endl;

    // get data from user
    std::cout << "Enter a day ";
    std::cin >> day;

    std::cout << "Enter a month ";
    std::cin >> month;

    std::cout << "Enter a year ";
    std::cin >> year;

    // test setDate
    aDate.setDate(year, month, day);

    std::cout << "The date is : " << aDate.getDate() << std::endl;

    return 0;
}