#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num;
    int totalNum = 0;

    for(int i=0; i<5; i++){
        cin >> num;
        totalNum+= pow(num, 2);
    }

    cout << totalNum%10 << endl;

    return 0;
}