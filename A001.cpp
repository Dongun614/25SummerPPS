// g배열과 s배열이 있음, g배열은 아이가 필요로 하는 쿠키의 개수, s배열은 가지고 있는 쿠키의 배열
// g배열과 s배열을 인덱스에 맞춰서 비교를 하고 s >= g 이면 count를 증가시킨다
// 마지막에 count를 출력한다

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int main(){
    string input_g;
    string sub1;
    string input_s;
    string sub2;

    getline(cin, input_g);
    getline(cin, input_s);
    sub1 = input_g.substr(1, input_g.size() - 2);
    sub2 = input_s.substr(1, input_s.size() - 2);

    stringstream ss1(sub1);
    stringstream ss2(sub2);

    string tok;
    int g_count = 0;
    int s_count = 0;

    while(getline(ss1, tok, ',')){
        g_count++;
    }

    while(getline(ss2, tok, ',')){
        s_count++;
    }

    int* g = (int*)malloc(sizeof(int) * g_count);
    int* s = (int*)malloc(sizeof(int) * s_count);

    ss1.clear();
    ss2.clear();
    ss1.str(sub1);
    ss2.str(sub2);

    int index=0;
    while(getline(ss1, tok, ',')){
        g[index++] = stoi(tok);
    }

    index=0;
    while(getline(ss2, tok, ',')){
        s[index++] = stoi(tok);
    }

    int count=0;

    if(g_count < s_count){
        for(int i=0; i<g_count; i++){
            if(g[i] <= s[i]) count++;
        }
    } else{
        for(int i=0; i<s_count; i++){
            if(g[i] <= s[i]) count++;
        }
    }

    cout << count << endl;
    
    return 0;
}