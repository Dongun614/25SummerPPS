//1. 개수를 입력받는다.
//2. 개수만큼 int 배열 2개를 만든다. 각각 A, B
//3. A, B에 값을 받는다.
//4. A를 돌려서 min_index 배열을 만든다.
//5. B를 돌려서 max_index 배열을 만든다.
//6. 각 배열을 이용해서 temp와 함께 A를 재배열한다.
//7. 재배열된 A와 B를 곱해서 결과물을 출력

#include <iostream>

using namespace std;

int main(){
    int num;
    cin >> num;

    int* A = (int*)malloc(sizeof(int) * num);
    int* B = (int*)malloc(sizeof(int) * num);

    for(int i=0; i<num; i++){
        cin >> A[i];
    }

    for(int i=0; i<num; i++){
        cin >> B[i];
    }

    //확인용 코드
    for(int i=0; i<num; i++){
        cout << "A[" << i << "]: " << A[i] << endl;
        cout << "B[" << i << "]: " << B[i] << endl;
    }

    return 0;
}