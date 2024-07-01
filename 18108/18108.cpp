#include <iostream>
using namespace std;

/*서기 연도: 우리나라
  불기 연도: 태국 */

/*불기 연도를 서기 연도로 변환한 결과 출력하기*/
int main() {
	int year;
	int korYear;
	cin >> year;

	if (year >= 1000 && year <= 3000) {
		korYear = year - 543;
	}
	cout << korYear;
	return 0;
}