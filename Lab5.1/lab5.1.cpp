#include <iostream>
#include <cmath>

using namespace std;

double h(const double g, const double s);

int main()
{
	double g, s;

	cout << "s = "; cin >> g;
	cout << "t = "; cin >> s;

	double c = h(g, s) + pow(h(g, s+1), 2) / 1 + pow(h(pow(g,2), pow(s, 2)), 3);

	cout << "c = " << c << endl;

	return 0;
}

double h(const double a, const double b)
{
	return pow(a,2) - pow(b, 2);
}

