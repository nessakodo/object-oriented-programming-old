#include <iostream>
#include <string>
#include <iomanip>

// these using statements are allowed.  Using namespace std; is not allowed
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    // declare variables
    char day{0};
    int hour{0};
    int minute{0};
    char ampm{0};

    // Loops three times to make appointments
    for (int i{0}; i<3; i++)
    {
        string dayName{""};  //define string variable for day

        cout << "New Appointment" << endl;

        cout << "Enter Day [M,T,W,R,F,S,U]> ";
        cin >> day;

       if (day != 'M' && day != 'T' && day != 'W' && day != 'R' &&
            day != 'F' && day != 'S' && day != 'U') //Validate DAY
        {
            cout << "invalid DAY value\n";
            return 1;
        }

        cout << "Enter Hour [0-11]> ";
        cin >> hour;

        if ((hour < 0 || hour > 11) ) // validate hour
        {
            cout << "invalid Hour value\n";
            return 1;
        }

        cout << "Enter Minute [0-59]> ";
        cin >> minute;

        if ((hour < 0 || hour > 11) || (minute < 0 || minute > 59)) //Validate HH::MM
        {
            cout << "HH:MM\n";
            return 1;
        }

        cout << "Enter AM/PM [A/P]> ";
        cin >> ampm;

        if ( (ampm != 'A' ) && (ampm != 'P')) //Validate AM/PM
        {
            cout << "invalid AM/PM value\n";
            return 1;
        }

        switch(day)
        {
            case 'M':
                dayName = "Monday";
                break;
            case 'T':
                dayName = "Tuesday";
                break;
            case 'W':
                dayName = "Wednesday";
                break;
            case 'R':
                dayName = "Thursday";
                break;
            case 'F':
                dayName = "Friday";
                break;
            case 'S':
                dayName = "Saturday";
                break;
            case 'U':
                dayName = "Sunday";
                break;
        }

        cout << std::setfill(' ')
             << std::setw(15) << dayName
             << " "
             << std::setw(2) << std::setfill('0') << hour
             << ":"
             << std::setw(2) << std::setfill('0') << minute
             << " "
             << std::setw(2) << (ampm=='A'? "AM" : "PM") << endl;
    }

    return 0;
}