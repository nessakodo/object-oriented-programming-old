#include <iostream>

// Function to recursively sum even numbers
int sumEvenNumbers(int n) {
    if (n <= 0) {
        return 0;
    } else {
        if (n % 2 == 0) {
            return n + sumEvenNumbers(n - 2);
        } else {
            return sumEvenNumbers(n - 1);
        }
    }
}

int main() {
    int num;
    
    std::cout << "Enter a positive integer: ";
    std::cin >> num;
    
    if (num < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        int result = sumEvenNumbers(num);
        std::cout << "Sum of even numbers up to " << num << " is: " << result << std::endl;
    }
    
    return 0;
}
