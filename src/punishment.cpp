#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

;//prototype
void myFine(int aRandNum);

int main()
{
    srand(static_cast<unsigned int>(time(0)));  // set the seed
    for (int ndx = 0; ndx < 20; ++ndx)
    {
        myFine(rand());  // calls myFine to determine the fine.
    }

        return 0;
};

void myFine(int aRandNum)
{
    std::cout << "The punishment/fine is ";

    switch (1 + aRandNum % 5)
    {
        case 1:
        {
            std::cout << '$' << pow(10, (aRandNum % 4)) << std::endl;
            break;
        }
        case 2:
        {
            std::cout << "loss of driving privileges\n";
            break;
        }
        case 3:
        {
            std::cout << "night in jail\n";
            break;
        }
        case 4:
        {
            std::cout << "week in jail\n";
            break;
        }
        case 5:
        {
            std::cout << "week of sorting recycling\n";
            break;
        };
    };
    return;
};