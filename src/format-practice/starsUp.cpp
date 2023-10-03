#include <iomanip>
#include <iostream>

int main()
{

    int numOfStars; // Declare numOfStars as an int

    std::cout << "Enter the number of times you would like to print *'s: ";
    std::cin >> numOfStars;

    for (int num = 1; num <= numOfStars; ++num)
    {
        using std::setw;
        using std::setfill;

        std::cout << std::setw(num) << std::setfill('*') << "" << std::endl;
    }

    return 0;
}