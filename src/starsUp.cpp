#include <iostream>
#include <iomanip>

int main()
{
    int star{1};
    int howMany{0};


    std::cout << "enter how many iterations to print : ";
    std::cin >> howMany;

    for (int ndx = 0; ndx <= howMany; ++ndx)
    {
        using std::cout;
        cout << std::setw(ndx+1) << std::setfill('*') << std::endl;
        cout << ' ';
    }

    std::cout << std::endl;

    return 0;
}