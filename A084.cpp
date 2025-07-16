#include<iostream>
#include<vector>
#include<string>
#include<algorithm> // sort 함수 포함
using namespace std;
 
int main() {
	string S; // 문자열
	cin >> S;
 
	int len = S.length(); // 문자열의 길이

	string arr[1001];
 
	for (int i = 0; i < len; i++)
	{
		 arr[i] = S.substr(i);//안되는 이유는?
	}
 
	sort(arr, arr + len); // 오름차순 정렬 실행

 
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << '\n';
	}
	return 0;
}