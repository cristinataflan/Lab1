#include <iostream>
#include "ex1.h"
#include "ex11.h"

using std::cin;
using std::cout;

int main()
{
	int v;
	cout << "Geben Sie 1 fur 1.Aufagabe oder 11 fur die 11.Aufgabe: ";
	cin >> v;
	if (v == 1)
		my_main();
	else
		main1();
	return 0;
}