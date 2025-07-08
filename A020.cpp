#include <iostream>

using namespace std;

int main(){
    int current_people = 0, max_people = 0;
    int come, out;

    for(int i=0; i<4; i++){
        cin >> come >> out;
        current_people = current_people - come + out;
        if(current_people > max_people) max_people = current_people;
    }

    cout << max_people << endl;

    return 0;
}