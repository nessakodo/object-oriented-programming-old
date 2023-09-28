#include <string>
// header file for Date class

class Date
{
private:
    // private members of the class.
    int day;
    int month;
    int year;

public:
    // public members of the class.
    //*** explicit as we don't want unexpected conversions

    explicit Date();
    explicit Date(int aYear, int aMonth, int aDay);

    int getDay();
    int getMonth();
    int getYear();

    void setDay(int theDay);
    void setMonth(int mon);
    void setYear(int yr);

    void setDate(int aYear, int aMonth, int aDay);

    std::string getDate();
};