#include <iostream>
#include "ex1.h"
#include "ex11.h"

using std::cin;
using std::cout;

int main()
{
	int v;
	cout << "Geben Sie 1 fur 1.Aufagabe oder 11 fur die 11.Aufgabe ein: ";
	cin >> v;
	if (v == 1)
		my_main();
	else
		if (v == 11)
			main1();
		else
			cout << "Falsche Eingabe\n";
	return 0;
}