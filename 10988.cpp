#include<bits/stdc++.h>
using namespace std;
string str1, str2;
int main() {
//문자열 입력받기
	cin >> str1;
//reverse()를 위한 문자열 복사 
	str2 = str1;
	reverse(str2.begin(), str2.end());
	if(str1 == str2){
		cout << 1;
	}else cout << 0;
	
	return 0;
}
