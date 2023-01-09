#include<bits/stdc++.h>
using namespace std;

//선수의 숫자 
int N, cnt[26];
string str, result;
int main(){
	//같은 성이 5개면 성을 출력 아니면 PREDAJA출력
	cin >> N;
	//N명의 선수명단 받기 
	for(int i = 0; i < N; i++){
		cin >> str;
		//문자열의 앞자리의 배열 ++ 
		cnt[str[0]-'a']++;
	}
	//i + 'a' 맞는 문자열을 찾기 위한 행 
	for(int i=0; i < 26; i++) if(cnt[i] >= 5) result += (i +'a');

	if(result.size()){
		cout << result << '\n';
	}else cout << "PREDAJA" << '\n'; 
	
}
