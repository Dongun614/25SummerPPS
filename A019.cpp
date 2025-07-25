#include <iostream>
#include <string>

using namespace std;

int main(){
    int A, B, C;
    int num;
    string num_str;
    int count[10] = {0, };

    cin >> A >> B >> C;
    num = A * B * C;
    num_str = to_string(num);

    for(int i=0; i<num_str.size(); i++){
        count[num_str[i] - '0']++;
    }

    for(int i=0; i<10; i++){
        cout << count[i] << endl;
    }

    return 0;
}
//