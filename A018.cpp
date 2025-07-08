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

    //A로 min_index 꾸리기
    int min;
    int* min_idx = (int*)malloc(sizeof(int)*num);
    int min_idx_temp;
    for(int i=0; i<num; i++){
        min = 101;
        for(int j=0; j<num; j++){
            bool already_selected = false;
            if(A[j] < min){
                for(int k=0; k<i; k++){
                    if(j == min_idx[k]){
                        already_selected = true;
                        break;
                    }
                }

                if(already_selected) continue;

                min = A[j];
                min_idx_temp = j;
            }
        }
        min_idx[i] = min_idx_temp;
    }

    //B로 min_index 꾸리기
    int max;
    int* max_idx = (int*)malloc(sizeof(int)*num);
    int max_idx_temp;
    for(int i=0; i<num; i++){
        max = -1;
        for(int j=0; j<num; j++){
            bool already_selected = false;
            if(B[j] > max){
                for(int k=0; k<i; k++){
                    if(j == max_idx[k]){
                        already_selected = true;
                        break;
                    }
                }

                if(already_selected) continue;

                max = B[j];
                max_idx_temp = j;
            }
        }
        max_idx[i] = max_idx_temp;
    }

    //A 재배열
    int* relocate_A = (int*)malloc(sizeof(int) * num);
    for(int i=0; i<num; i++){
        relocate_A[max_idx[i]] = A[min_idx[i]]; 
    }

    //확인용 코드
    // for(int i=0; i<num; i++){
    //     cout << "min_idx[" << i << "] : "  << min_idx[i] << endl;
    // }

    // for(int i=0; i<num; i++){
    //     cout << "relocate_A[" << i << "] : "  << relocate_A[i] << endl;
    // }

    // for(int i=0; i<num; i++){
    //     cout << "max_idx[" << i << "] : "  << max_idx[i] << endl;
    // }

    //result 출력
    int result = 0;
    for(int i=0; i<num; i++){
        result = result + relocate_A[i] * B[i];
    }

    cout << result << endl;

    return 0;
}