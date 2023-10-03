#include <iostream>

// <return type> <function name> ( variables comma separated)
int main()
{
    //declare variables
    //var1 is the first variable entered by user
    int var1{0};
    //var2 is the second variable entered by user
    int var2{0};

    //Prompt user to enter variables
    std::cout << "Please enter first integer :\n";
    std::cin >> var1;
    std::cout << "Please enter second integer :\n";
    std::cin >> var2;

    std::cout << "The sum is :" << var1 + var2 << std::endl;
    std::cout << var1 << " + " << var2 << " = " << var1 + var2 << std::endl;

    // is var1 > var2
    if (var1 > var2)
    {
        std::cout << "var1 > var2" << std::endl;
        std::cout << var1 << " < " << var2 << std::endl;
    }   // is var2 > var1
    else  if (var2 > var1)
    {
        std::cout << "var2 > var1" << std::endl;
        std::cout << var1 << " < " << var2 << std::endl;
    } // then they are equal
    else
    {
        std::cout << "var2 = var1" << std::endl;
    }

    return 0;
}