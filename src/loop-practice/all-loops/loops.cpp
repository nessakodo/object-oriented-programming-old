#include <iostream>
using namespace std;

int main()
{
    // Defining the index for while loop
    int index{1};

    // While loop to 10
    while (index <= 10)
    {
        cout << index << " ";

        ++index;
    }

    // Separating loops
    cout << "\n";

    // Defining the counter for for loop
    int counter{0};

    // For loop to 100
    for (index = 0; index <= 100; index += 3)
    {
        cout << index << " ";
        if (counter == 9)
        {
            cout << endl;
            counter = 0; // Fixed the assignment operator here
        }
        else
        {
            counter++; // Increment the counter
        }
    }

    // Separating loops
    cout << "\n";

    // Resetting index for the do-while loop
    index = 0;

    // Do-while loop
    do
    {
        cout << index << " ";
        index++;
    }
    while (index <= 10);

    // Sentinel Do-while loop
        int input;
    do
    {
        cout << "Please enter a number (-1 to exit): ";
        cin >> input;

        int index = 0; // Reset the index for each iteration

        while (index <= input) // Use <= to include the input value
        {
            cout << index << " ";
            index++; // Increment the index
        }
    }
    while (input != -1);

    return 0;
}