#include<bits/stdc++.h>
using namespace std;

string str, temp;

int main() {
	//문자열 입력받기
	getline(cin, str);

	for(char a: str) {
		//대문자일 경우 
		if(65<=a && a<=90) {
			if(a+13 <= 90) {
				temp += (a+13);
			} else temp += (a-13);
		//소문자일경우 
		} else if(97<=a && a<=122) {
			if(a+13 <= 122) {
				temp += (a+13);
			} else temp += (a-13);
		//알파벳이 아닌경우 
		} else temp += a;

	}
	cout << temp << '\n';
}

