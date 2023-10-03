
#include <iostream>
#include <string>
#include <cstdlib>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::getline;
    using std::string;
    using std::stoi;

    string myString;
    string concatString;

    cout << "Please enter a number : ";
    cin >> myString;
    cout << endl;

    ;// use of stoi function
    cout << "You entered the string \"" << myString
        << "\", which is the integer " << stoi(myString) << endl;

    cout << "Please enter a number : ";
    cin >> concatString;
    cout << endl;

    ;// adding to the end of a string
    myString = myString + concatString;

    cout << "String is now \"" << myString
        << "\", which is the integer " << stoi(myString) << endl;

    string testString;
    string temp;
    // generating a string of numbers with spaces between.   
    for (int ndx = 0; ndx < 3; ++ndx)
    {
        cout << "Please enter a number : ";
        cin >> temp;
        if (ndx <= 2 && ndx > 0)
            testString = testString + " " + temp;
        else if (ndx == 0)
            testString = temp;
        cout << "The string is \"" << testString << '\"' << endl;
    }

    return (EXIT_SUCCESS);
};
