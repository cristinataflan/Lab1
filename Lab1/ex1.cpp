#include <cassert>
#include <iostream>

using std::cout;

void tests();
bool primzahl(int x);
void alle_prim(int x);
void langste_teilfolge(int v[], int n);


int main()
{
	tests();

	cout << "Ubung 1.a)\n";
	alle_prim(100);

	cout << "\nUbung 1.b)\n";
	int v[12] = { 1, 7, 0, -4, 8, 15, 23, 23, 8, -42, 84, 109 };
	langste_teilfolge(v, 12);
	return 0;
}


void tests()
{
	// Testet die Korrektheit der Funktionen
	assert(primzahl(2) == true);
	assert(primzahl(29) == true);
	assert(primzahl(-7) == false);
	assert(primzahl(0) == false);
	assert(primzahl(44) == false);
	assert(primzahl(101) == true);
}


bool primzahl(int x)
{
	// Testet ob x eine Primzahl ist: wenn ja -> return true (return false -> sonst)
	if (x == 2)
		return true;
	if (x < 2 || !(x % 2))  // alle Zahlen, die kleiner als 2 oder Vielfachen von 2 (ausser sich selbst) sind, sind nicht prim 
		return false;
	for (int i = 3; i * i <= x; i += 2)  // wir suchen einen Teiler von 3 bis zu dem Wurzel der Zahl 
		if (!(x % i))  // x teilbar durch i
			return false;
	return true;
}


void alle_prim(int x)
{
	// Schreibt alle Primzahlen kleiner als eine gegebene Zahl
	if (x < 2)
		cout << "Es gibt keine Primzahlen < 2";
	else
	{
		cout << "Primzahlen <= " << x << ": ";
		for (int i = 2; i <= x; i++)
			if (primzahl(i))
				cout << i << " ";
		cout << '\n';
	}
}


void langste_teilfolge(int v[], int n)
{
	// Sucht die langste Teilfolge in einem Vektor und schreibt sie an
	int max = 1, poz = 0, ct;
	for (int i = 1; i < n; i++)
	{
		ct = 1;
		while (v[i] >= v[i - 1] && i < n)
		{
			ct++;
			i++;
			if (max < ct)
			{
				max = ct;
				poz = i - ct;
			}
		}
	}

	for (int i = poz; i < poz + max; i++)
		cout << v[i] << ' ';
	cout << '\n';
}