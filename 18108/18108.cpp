#include <iostream>
using namespace std;

/*���� ����: �츮����
  �ұ� ����: �±� */

/*�ұ� ������ ���� ������ ��ȯ�� ��� ����ϱ�*/
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