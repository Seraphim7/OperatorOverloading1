#include "Overloads.h"

int main()
{
	Clock clock1;
	Clock clock2;

	clock1.SetClock(3, 3, 3);
	clock2.SetClock(2, 5, 6);

	cout << "clock1 is: " << clock1.GetClock() << endl;
	cout << "clock2 is: " << clock2.GetClock() << endl;

	clock1 = clock2; // equivelent to clock1.operator=(clock2)

	cout << "now clock1 is the same as clock2: " << clock1.GetClock() << endl;

	return 1;
}