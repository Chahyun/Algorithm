#include<bits/stdc++.h>
using namespace std;
string str1, str2;
int main() {
//���ڿ� �Է¹ޱ�
	cin >> str1;
//reverse()�� ���� ���ڿ� ���� 
	str2 = str1;
	reverse(str2.begin(), str2.end());
	if(str1 == str2){
		cout << 1;
	}else cout << 0;
	
	return 0;
}
