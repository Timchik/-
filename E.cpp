#include <iostream>
#include <cmath>

using namespace std;

int x1, x2, d, a, b, c;

int main() {

	cin >> a >> b >> c;
	d = sqrt(b * b - 4 * a * c);
	x1 = (-b + d) / (2*a);
	x2 = (-b - d) / (2*a);
	cout << x1 << " " << x2;

	return(0);
}