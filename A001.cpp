// g배열과 s배열이 있음, g배열은 아이가 필요로 하는 쿠키의 개수, s배열은 가지고 있는 쿠키의 배열
// g배열과 s배열을 인덱스에 맞춰서 비교를 하고 s >= g 이면 count를 증가시킨다
// 마지막에 count를 출력한다

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string s;
    string sub1;

    getline(cin, s);
    sub1 = s.substr(1, s.size()-2);

    stringstream ss(sub1);
    string tok;

    while(getline(ss, tok, ',')){
        cout << tok << endl;
        cout << typeid(tok).name() << endl;
    }

    
    return 0;
}