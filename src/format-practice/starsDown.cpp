#include <iomanip>
#include <iostream>


// Objective: Output however many # (from user input) is stars and then decrease the number of stars on each line

int main()
{

    unsigned int numOfStars; // Declare numOfStars as an int

    std::cout << "Enter the number of times you would like to print *'s: ";
    std::cin >> numOfStars;

    for (int num = numOfStars ; num > 0; --num)
    {
        using std::setw;
        using std::setfill;

        std::cout << std::setw(num) << std::setfill('*') << "" << std::endl;
    }

    return 0;
}