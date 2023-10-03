#include <iostream>
#include <cstdlib>
#include <iomanip>

void stars(int);

void starsRec(int);

int main()
{
   using std::cout;
   using std::cin;

   int count{0};

   cout << "Enter a number : ";
   cin >> count;
   int temp = count;
   stars(count);
   starsRec(temp);
   return (EXIT_SUCCESS);
};

void stars(int num)
{
   for (; num >= 1; --num)
   {
      std::cout << std::setw(num) << std::setfill('*') 
                << '*' << std::endl;
   }
   return;
}

void starsRec(int num)
{
   if (num == 0)  // end case
      return;
   std::cout << std::setw(num) << std::setfill('*') << '*' << std::endl;
   starsRec(num - 1);  // recursive call
};

