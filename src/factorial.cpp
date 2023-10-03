#include <iostream>

int factorial(int num);// prototype

int main()
{
    int aNumber;

    std::cout << "Enter a positive number : ";
    std::cin >> aNumber;

    std::cout << "The factorial of " << aNumber << " = " << factorial(aNumber) << std::endl;

    return 0;
}

int factorial(int num)
{
    if (num > 1)
    {
        //std::cout << num << '*' << (num-1) << std::endl;
        return num * factorial(num - 1);
    }
    else
        return 1;

};