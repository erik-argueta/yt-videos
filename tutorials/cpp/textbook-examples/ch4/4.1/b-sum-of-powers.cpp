// Ch4.1.b 
//
//
//
//

#include <iostream>
#include <cmath>                   // math functions to use
using namespace std;

void sumSquares();

int main() {
     
     sumSquares();
     
     return 0;
}


void sumSquares() {
     // The sum of all squares between 1 and 100 (inclusive)
     // squares -> x*x -> 2*2 = 4, 3*3 = 9

     // Think about recording the total sum
     // Think about how we will keep track of what number we're on
     int sum{ 0 };
     for (int index = 1; index <= 100; index++) {
          //sum += index*index;                   // += because we want to add all the squares together.
          sum += pow(index, 2);                   // pow(base, exponent)
     }

     cout << "The total sum of all squares between 1 and 100 (inclusive): " << sum << endl;
}
