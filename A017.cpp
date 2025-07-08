#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
    int count[10] = {0,};
    string num;

    int ret = -1;

    cin >> num;

    if (stoi(num) > 1000000){
        return 0;
    }

    for (int i = 0; i < num.size(); i++){
        count[num[i] - '0']++;
    }

    count[6] = (count[6] + count[9] + 1) / 2;
    count[9] = 0;

    for (int i = 0; i < sizeof(count) / sizeof(int); i++){
        if (ret < count[i]) ret = count[i];
    }

    cout << ret << endl;

    return 0;
}