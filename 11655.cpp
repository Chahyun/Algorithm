#include<bits/stdc++.h>
using namespace std;

string str, temp;

int main() {
	//���ڿ� �Է¹ޱ�
	getline(cin, str);

	for(char a: str) {
		//�빮���� ��� 
		if(65<=a && a<=90) {
			if(a+13 <= 90) {
				temp += (a+13);
			} else temp += (a-13);
		//�ҹ����ϰ�� 
		} else if(97<=a && a<=122) {
			if(a+13 <= 122) {
				temp += (a+13);
			} else temp += (a-13);
		//���ĺ��� �ƴѰ�� 
		} else temp += a;

	}
	cout << temp << '\n';
}

