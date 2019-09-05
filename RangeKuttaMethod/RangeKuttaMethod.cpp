//Danning Yu
//MAE 82
//Code for 4th Order Range-Kutta Method

#include <iostream>
#include <cmath>
 #include <string>
using namespace std;

long double func(long double x, long double y);

int main() {
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(15);
	long double x, y, h, f1, f2, f3, f4;
	x = 0.0; //x0
	y = -1.0; //y0
	double xfinal;
	cin >> xfinal;
	h = 0.01; //step size
	for (int i = 1; i <= 100*xfinal; i++) {
		f1 = h * func(x, y);
		f2 = h * func(x + 0.5*h, y + 0.5*f1);
		f3 = h * func(x + 0.5*h, y + 0.5*f2);
		f4 = h * func(x + h, y + f3);
		y = y + (1.0 / 6.0)*(f1 + 2.0 * f2 + 2.0 * f3 + f4);
		x = x + h;
		cout << "x is " << x <<" and y is " << y << endl;
	}
	return 0;
}
long double func(long double x, long double y) {
	long double temp = (3.0 * x*x + 4.0 * x + 2.0) / (2.0 * (y - 1.0));
	return temp;
}