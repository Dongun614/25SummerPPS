//생각 정리
//1. 케이스의 개수를 입력받음 numCase
//2. numCase만큼 for문을 돌린다
//3. 첫번째 수를 입력받는다. numLength
//4. numLength만큼 의 인트 배열을 선언하고 for문을 돌리면서 수를 저장한다
//5. 배열에 저장하면서 동시에 값을 누산한다. totalNum
//6. totalNum / numLength를 통해 평균을 구하고 다시 for문을 톨리면서 평균보다 큰 값들을 센다 avg, overAvg
//7. overAvg / numLength * 100을 한 값을 소수점 셋째자리까지 반올림하여 출력한다.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int numCase;
    int firstNum;

    cin >> numCase;

    for(int i=0; i<numCase; i++){
        int totalCount = 0;
        int overAvg = 0;

        cin >> firstNum;
        
        int* intArray = (int*) malloc(sizeof(int) * firstNum);
        
        for(int i=0; i<firstNum; i++){
            cin >> intArray[i];
            totalCount += intArray[i];
            //cout << intArray[i] << " / " << totalCount << endl;
        }

        float avg = totalCount / firstNum;

        //cout << "avg : " << avg << endl;

        for(int i=0; i<firstNum; i++){
            if(avg < intArray[i]) overAvg++;
            //cout << "overAvg: " << overAvg << endl;
        }

        float ratio = (float)overAvg / (float)firstNum * 100;
        //cout << "ratio: " << ratio << endl;

        cout << fixed;
        cout.precision(3);
        cout << ratio << "%" << endl;

    }

    return 0;
}