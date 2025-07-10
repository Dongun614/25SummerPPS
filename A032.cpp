#include <iostream>

using namespace std;

int main(){
    int loop;
    cin >> loop;

    int A, B;

    for(int i=0; i<loop; i++){
        cin >> A >> B;
        int* array = (int*)malloc(sizeof(int) * B);
        for(int j=0; j<=A; j++){
            for(int k=0; k<B; k++){
                if(j==0){
                    array[k] = k+1;
                } else{
                    if(k == 0) continue;

                    array[k] += array[k-1];
                }
            }
        }
        cout << array[B-1] << endl;
    }

    return 0;
}