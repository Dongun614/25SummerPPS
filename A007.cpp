#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    int ascen[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int descen[8] = {8, 7, 6, 5, 4, 3, 2, 1};
    int num[8];

    string input;

    getline(cin, input);

    stringstream ss(input);
    string tok;

    int idx=0;
    while(getline(ss, tok, ' ')){
        num[idx++] = stoi(tok);
    }

    if(idx > 8) return 0;

    int ascen_c=0;
    int descen_c=0;

    for(int i=0; i<8; i++){
        if(ascen[i] == num[i]) ascen_c++; 
        if(descen[i] == num[i]) descen_c++;
    }

    if(ascen_c == 8) cout << "ascending" << endl;
    else if(descen_c == 8) cout << "descending" << endl;
    else cout << "mixed" << endl;


    return 0;
}