#include <iostream>
#include <string>

using namespace std;

string og,input;
int cnt=0;

int main() {
    getline(cin,og);

    getline(cin,input);

    for(int i=0;i<og.length();i++) {
        bool flag=true;
        for(int j=0;j<input.length();j++) {
            if(og[i+j]!=input[j]) {
                flag=false;
                break;
            }
        }
        if(flag) {
            cnt++;
            i+=input.length()-1;
        }
    }
    cout << cnt;

    return 0;
}
