#include <iostream>

using namespace std;

int main(){

    long input;
    int first;

    cin >> input >> first;

    if(input > 5){
        cout << "Love is open door" << endl;
        return 0;
    }

    for(int i=1; i<input; i++){
        if(first == 0){
            cout << 1 << endl;
            first = 1;
        } else {
            cout << 0 << endl;
            first = 0;
        }
    }

    return 0;
}