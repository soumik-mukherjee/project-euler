#include <iostream>
using namespace std;

int main()
{
   /**
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.
   */
   cout << "Problem:\nIf we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.\nFind the sum of all the multiples of 3 or 5 below n." << "\n";
   int N;
   cout << "\nEnter a value for number N\n";
   cin >> N;

   double mul_of_three_or_five = 0;
   for (int i = 0; i <= N;  i++) {
      if(i % 3 == 0 || i % 5 == 0){
	 /** 
          cout << "Adding number, " << i << "\n";
         */
         mul_of_three_or_five += i;
     }
   }
   
   cout << "Sum of all multiples of 3 or 5 below the N is, " << mul_of_three_or_five << "\n";
   return 0;
}
