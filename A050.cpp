#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;

    cin >> str;

    int changed_num;

    for(int i=0; i<str.size(); i++){
        changed_num = str[i] - 3;

        if(changed_num < 65){
            changed_num += 26;
            str[i] = char(changed_num);
        } else{
            str[i] = char(changed_num);
        }
    }

    cout << str << endl;
    
    return 0;
}