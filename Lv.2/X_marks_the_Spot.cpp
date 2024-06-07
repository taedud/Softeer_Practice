// 1. N개의 문자열 쌍 (S1,T1), (S2,T2),…, (SN,TN)이 주어진다. 각 쌍에 대해, Si의 길이와 Ti의 길이는 같다.
// 2.  Si에서 글자 x 또는 X가 등장하는 위치를 Pi라고 하자. 이 위치는 항상 유일하다.
// 3. 이때, Ti의 Pi번째 글자를 읽으면 된다. 단, 소문자는 대문자로 바꿔야 한다.
// 4. 예를 들어, Si가 Indexing이고 Ti가 Indirect라면 읽게 되는 글자는 R이 된다.

// 제약조건
// 1 ≤ N ≤ 500,000

// 입력되는 문자열의 길이 합은 1,000,000을 넘지 않으며, 모든 문자열은 영어 알파벳 대소문자 또는 숫자로만 이루어져 있다.

// 입력형식
// 첫 번째 줄에 문자열 쌍의 개수 N이 주어진다.

// 두 번째 줄부터 N개의 줄에 걸쳐, i+1번째 줄에는 쌍을 이루는 두 문자열 Si,Ti가 공백으로 구분되어 주어진다.

// 출력형식
// 첫 번째 줄에 N개의 문자열 쌍에 대해 읽게 되는 글자를 차례대로 붙여서 출력한다.

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv){
    int N;

    cin>>N;

    string* str = new string[N*2];
    string result = "";

    for(int i = 0; i < N*2; i+=2){
        cin>>str[i]>>str[i+1];

        for(int j = 0; j < str[i].length(); j++){
            if(str[i][j] == 'x' || str[i][j] == 'X'  ){
                if(islower(str[i+1][j])){
                    result += toupper(str[i+1][j]);
                }else{
                    result += str[i+1][j];
                } 
            }
        }
    }

    cout<<result;
    return 0;
}