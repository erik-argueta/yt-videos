// Ch4.1.c
//
//
//
//

#include <iostream>
#include <cmath>                   // math functions to use
using namespace std;

void power2();

int main() {
     
     power2();
     
     return 0;
}

void power2() {
     // Powers from 2^0 to 2^20
     // Base: 2
     // Exponent: 0 >= n <= 20
     
     for (int index = 0; index <= 20; index++) {
          cout << "2^" << index << "\t\t" << pow(2, index) << endl;
     }
}