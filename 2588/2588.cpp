#include <iostream>
using namespace std;

/*¼¼ ÀÚ¸® ¼ö³¢¸®ÀÇ °ö¼À °úÁ¤*/
int main() {
	int a, b, temp;
	cin >> a >> b;

	int b_100, b_10, b_1;

	b_100 = b / 100;
	temp = b - b_100 * 100;

	b_10 = temp / 10;
	temp = temp - b_10 * 10;

	b_1 = temp;

	int inter1, inter2, inter3;
	inter1 = a * b_1;
	inter2 = a * b_10;
	inter3 = a * b_100;

	cout << inter1 << endl;
	cout << inter2 << endl;
	cout << inter3 << endl;

	inter2 = inter2 * 10;
	inter3 = inter3 * 100;

	int result = inter1 + inter2 + inter3;
	cout << result << endl;

	return 0;
}