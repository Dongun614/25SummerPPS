#include <iostream>

using namespace std;

int main(){

    int count[42] = {0, };
    int number;
    int result = 0;

    for(int i=0; i<10; i++){
        cin >> number;
        count[number%42]++;
    }

    for(int i=0; i<sizeof(count)/sizeof(int); i++){
        if(count[i] > 0){
            result++;
        }
    }

    cout << result << endl;

    return 0;
}