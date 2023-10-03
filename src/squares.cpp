//Solving the class-average problem using sentinel-controlled iteration.
#include <iostream>
#include <iomanip>  //parameterized stream manipulators

int main()
{
    // initialize variables
    int total{0};  //initialize sum of grades
    unsigned int gradeCounter{0};  // initialize # of grades entered so far
    int grade;
    
    // processing phase
    // prompt for input and read grade from user
    std::cout << "Enter grade (-1 to quit) ";
    std::cin >> grade;
    
    // loop until sentinel value is entered by user
    while (grade != -1)
    {
        total += grade;  // same as total = total + grade;
        ++ gradeCounter;  // same as gradeCounter = gradeCounter + 1;
        
        // prompt for input and read next grade
        std::cout << "Enter grade (-1 to quit) ";
        std::cin >> grade;
    }
    
    // termination phase
    // if user entered at least 1 grade
    if (gradeCounter != 0)
    {
        //use number with decimal point to calculate grade average
        double average{static_cast<double>(total) / gradeCounter;
        
        // display output (with two digits of precision)
        std::cout << "\nTotal of the " << gradeCounter 
                  << " grades entered is " << total;
        std::cout << std::setprecision(2) << fixed;
        std::cout << "\nClass average is " << average << std::endl;
    }
    else
    {
        //no grades where entered, so output appropriate message
        std::cout << "No grades were entered." << std::endl;
    }

## Quick Review 26 Sept

```cpp title="/src/review.cpp"

// overloaded functions
int sum(int a, int b)
{
     return a + b;
} 

float sum(float a, float b)
{
     return a + b;
}

int sum(int a, int b, int c)
{
     return a + b + c;
}

// setting default value
int square(int aValue = 1)  
{
    return aValue * aValue;
}

//pass by reference broken
/*void squareByReference( const int& aValue)
{
    aValue *= aValue;
}
*/

//pass by reference correct
void squareByReference(int& aValue)
{
    aValue *= aValue;
}

int main()
{
        return 0;
};

