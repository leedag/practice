#include <iostream>
using namespace std;

int main() {
	double A;
	double B;
	double result;
	cin >> A >> B;
	if ((A != 0) && (B != 0)) {
		if (((A > 0) || (B > 0)) && (A < 10) || (B < 10)) {
			result = A / B;
			cout.precision(9);
			cout << result;
		}
	}
	
}