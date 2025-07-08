#include <iostream>

using namespace std;

int main(){
    int socket_num;
    cin >> socket_num;

    int* hole_num = (int*)malloc(sizeof(int) * socket_num);

    for(int i=0; i<socket_num; i++){
        cin >> hole_num[i];
    }

    int result = hole_num[0];

    for(int i=1; i<socket_num; i++){
        result = result - 1 + hole_num[i];
    }

    cout << result << endl;

    return 0;
}