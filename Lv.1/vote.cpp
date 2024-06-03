//[한양대 HCPC 2023] 개표
//투표가 끝난 뒤에는 개표를 해야 한다. 일반적으로 개표는 칠판을 사용하며, 한 표가 나올 때마다 한 획을 추가로 긋는 방식을 사용한다.
// 이 문제에서는 다음과 같은 방식으로 개표를 진행한다.
// - 모든 후보자는 0표, 즉 아무것도 그려져 있지 않는 상태로 시작한다.
// - 어떤 후보자가 한 표를 받을 때마다, |를 맨 뒤에 그린다.
// - 단, 그 후보자가 5표를 받을 때마다, |를 그리는 대신 이미 있던 4개의 |에 가로줄을 그어 ++++를 만든다. 이후 1칸의 공백을 뒤에 추가한다.
// 예를 들면, 12표를 받은 후보의 경우 칠판에는 ++++ ++++ ||가 적히게 된다.
// 제약조건
// 1 ≤ T ≤ 100
// 1 ≤ n ≤ 100
// 입력형식
// 첫 번째 줄에 후보의 수 T가 주어진다.
// 두 번째 줄부터 T개의 줄에 걸쳐, 각 후보가 받은 표의 수 n이 주어진다.
// 출력형식
// 각 후보에 대해, 칠판에 그려지게 되는 결과를 한 줄에 하나씩 출력한다.

#include <iostream>

using namespace std;

int main(void){
    int T;
    int n;

    cin>>T;
    string full = "++++";

    for(int count = 0; count<T; ++count){
        n = 0;
        cin>>n;

        int result_full;
        int result;

        result_full = (int)n/5;
        result = n%5;
        
        if(result_full >=1){
            for(int add = 1; add <= result_full; add++){
                cout<<full<<' ';
            }
        }

        if(result != 0){
            for(int add = 1; add <= result; add++){
                cout<<"|";
            }
        }
        cout<<endl;
    
    }
    return 0;
}