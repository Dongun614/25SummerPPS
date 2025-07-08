#include <iostream>

using namespace std;

int youngsik(int n, int* c);
int minsik(int n, int* c);

int main(){
    int num;
    cin >> num;

    int* call_count = (int*)malloc(sizeof(int) * num);

    for(int i=0; i<num; i++){
        cin >> call_count[i];
    }

    int Y = youngsik(num, call_count);
    int M = minsik(num, call_count);

    if(Y < M){
        cout << "Y " << Y << endl;
    } else if(M < Y){
        cout << "M " << M << endl;
    } else{
        cout << "Y M " << M << endl;
    }

    return 0;
}

int youngsik(int n, int* c){
    int ret = 0;
    for(int i=0; i<n; i++){
       ret = ret + ( c[i] / 30 + 1 ) * 10;
    }

    return ret;
}

int minsik(int n, int* c){
    int ret = 0;
    for(int i=0; i<n; i++){
       ret = ret + ( c[i] / 60 + 1 ) * 15;
    }

    return ret;
}