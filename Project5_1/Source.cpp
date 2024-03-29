#include <iostream>
#include <cmath>
using namespace std;

double h(const double a, const double b); // прототип

int main() 
{
	double s, t;

	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;

	double c = (pow(h(t * t, 1), 3) + h(1, t * (s * s))) / (1 + pow(h(s, t), 2));
	cout << "c = " << c << endl;

	return 0;
}

double h(const double a, const double b) // визначення прототипу
{
	return (pow(a, 2) * sin(b) + pow(b, 2) * cos(a));
}