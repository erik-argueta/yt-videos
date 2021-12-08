//
//
// Used for tutorial videos!
//
//
//

#include <iostream>
using namespace std;

void whileLoopSum();
void forLoopSum();

int main() {
	// Using a loop, sum all of even numbers from 2 to 100 (inclusive)

	// What kind of loop will we be using?			we can use FOR or WHILE
	// What does sum mean?							addition, +
	// What dictates an even number?				they are divisible by 2
	// What does inclusive mean?					must include 2 and 100 in its sum

	//whileLoopSum();
	//forLoopSum();

	return 0;
}


void whileLoopSum() {
	bool done = false;
	int sum{ 0 };
	int number{ 2 };		// serve as what number the program is on (2 to 100)

	while (!done) {		// !done or done == false
		// 2 + 3 + 4 + 5 + 6 + ... + 100 = sum
		// 2/2 = 1.0, 3/2 = 1.5, 4/2 = 2.0, 5/2 = 2.5
		if (number % 2 == 0) { sum += number; }				// sum += number means sum = sum + number

		if (number == 100) { done = true; }

		number++;
	}

	cout << "The sum of all even numbers from 2 to 100 is: " << sum << endl;
}

void forLoopSum() {
	int sum{ 0 };
	for (int i = 2; i <= 100; i += 2) {
		// 2, 4, 6, 8, 10, ... 100
		sum += i;
	}

	cout << "The sum of even numbers from 2 to 100 is: " << sum << endl;
}