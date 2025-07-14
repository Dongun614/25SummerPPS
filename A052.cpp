#include <iostream>
#include <string>

using namespace std;

int main(){
    int num;
    cin >> num;

    string str;
    int score;
    int plus_score;

    for(int i=0; i<num; i++){
        score = 0;
        plus_score = 1;
        cin >> str;
        for(int j=0; j<str.size(); j++){
            if(str[j] == 'O'){
                score += plus_score;
                plus_score++;
            } else{
                plus_score = 1;
            }
        }
        cout << score << endl;
    }

    return 0;
}