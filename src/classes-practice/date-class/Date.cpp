#include <string>
#include "Date.h"
/*
    // Default Constructor
    explicit Date();
    // Constructor
    explicit Date(int aYear, int aMonth, int aDay);

    //Setters
    void setDay(int theDay);
    void setMonth(int mon);
    void setYear(int yr);

    // Getters
    int getDay();
    int getMonth();
    int getYear();

    // Sets the Date
    void setDate(int aYear, int aMonth, int aDay);

    //Gets the Date
    std::string getDate();

*/


Date::Date() : year{2000}, month{1}, day{1}
{ // default constructor
// we did not discuss this one in class.

}

Date::Date(int aYear, int aMonth, int aDay): year{aYear}, month{aMonth}, day{aDay}
{ //Constructor
}

/* Alternate method
Date::Date(int aYear, int aMonth, int aDay)
{
    day = aDay;
    month = aMonth;
    year = aYear;
}
*/

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

void Date::setDay(int theDay)
{
    day = theDay;
}

void Date::setMonth(int mon)
{
    month = mon;
}

void Date::setYear(int yr)
{
    year = yr;
}

void Date::setDate(int aYear, int aMonth, int aDay)
{
    year = aYear;
    month = aMonth;
    day = aDay;
}

std::string Date::getDate()
{
    return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
}