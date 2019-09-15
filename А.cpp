#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long double a, b;
	cin >> a >> b;
	cout << a + b <<endl << a - b << endl << a * b << endl <<  fixed  << setprecision(3) << a / b;
	return 0;
}
