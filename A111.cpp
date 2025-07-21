#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <cstdio>
using namespace std;
int n, k, ret;
int main() {
    cin >> n;
    while(n--){
        cin >> k;
        ret = 1;
        for(int i = 1; i < k; i++){
            ret = ret * 2 + 1;
        }
        cout << ret << " : " <<  (int)pow(2, k) - 1 << "\n";
    }
    return 0;
}

