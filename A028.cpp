#include <iostream>
#include <string>

using namespace std;

int main(){
    string A;
    string B;
    string result;

    cin >> A >> B;

    int time;

    if(A.size() < B.size()){
        time = A.size();
    } else time = B.size();

    int carry;
    int ret;

    for(int i=time-1; i>=0; i--){
        ret = ( A[i] - '0' ) + ( B[i] - '0' );
        ret += carry;
        result = result + to_string(ret % 10);
        carry = ret / 10;
    }

    for(int i=time-1; i>=0; i--){
        cout << result[i];
    }

    cout << endl;
    
    return 0;
}