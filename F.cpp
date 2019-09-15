#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int a, b;
double c;

int main()
{
	cin >> a >> b;
	c = sqrt(a * a + b * b);
	cout << fixed << setprecision(6) << (c);
	return(0);
}
