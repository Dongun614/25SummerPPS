// 1. for문을 5번 반복한다.
//  1.1. total값을 0으로 초기화 한다.
// 2. for문을 4번 반복한다.
// 3. 점수를 입력받는다.
//  3.1. 입력받은 점수를 total값에 저장한다.
// 4. for문이 끝나면 total값과 max값을 비교한다. (max의 초기값은 0)
// 5. 비교하여 더 큰 값을 가지고 있다면 해당 값으로 max값을 변경하고 그 때의 i값을 max_index로 저장한다.
// 6. max_index + 1과 max값을 출력한다.

#include <iostream>

using namespace std;

int main(){
    int total = 0;
    int max = 0;
    int max_index;

    int score;

    for(int i=0; i<5; i++){
        total = 0;
        for(int j=0; j<4; j++){
            cin >> score;
            total += score;
        }
        if(total > max){
            max = total;
            max_index = i;
        }
    }

    cout << max_index + 1  << " " << max << endl;

    return 0;
}