#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x;
	double y;
	double a;
	double b;

	cout << "x = "; cin >> x;

	a = pow(x, 3);

	//Спосіб 1
	if (x < -1)
		b = fabs(2 + x) + pow(sin(x), 2);
	if (x >= -1 && x <= 1)
		b = atan(pow(x, 3) + 1) + 1;
	if (x > 1)
		b = exp(cos(x)) + log10((1 / x) + 1);

	y = a + b;

	cout << endl;
	cout << "1) y = " << y << endl;

	//Спосіб 2
	if (x < -1)
		b = fabs(2 + x) + pow(sin(x), 2);
	else
		if (x >= -1 && x <= 1)
			b = atan(pow(x, 3) + 1) + 1;
		else
			b = exp(cos(x)) + log10((1 / x) + 1);

	y = a + b;

	cout << "2) y = " << y << endl;

	cin.get();
	return 0;
}