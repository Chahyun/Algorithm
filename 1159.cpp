#include<bits/stdc++.h>
using namespace std;

//������ ���� 
int N, cnt[26];
string str, result;
int main(){
	//���� ���� 5���� ���� ��� �ƴϸ� PREDAJA���
	cin >> N;
	//N���� ������� �ޱ� 
	for(int i = 0; i < N; i++){
		cin >> str;
		//���ڿ��� ���ڸ��� �迭 ++ 
		cnt[str[0]-'a']++;
	}
	//i + 'a' �´� ���ڿ��� ã�� ���� �� 
	for(int i=0; i < 26; i++) if(cnt[i] >= 5) result += (i +'a');

	if(result.size()){
		cout << result << '\n';
	}else cout << "PREDAJA" << '\n'; 
	
}
