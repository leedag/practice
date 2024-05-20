#include <iostream>
using namespace std;

int main() {
	int A;
	int B;

	while (true) {
		cin >> A;
		if (A < 0 || A>10) {
			cout << "다시 입력하세요.";
		}
		cin >> B ;
		if (B < 0 || B>10) {
			cout << "다시 입력하세요.";
		}
		break;
	}
	cout << A + B;
	return 0;
}
