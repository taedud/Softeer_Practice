//[한양대 HCPC 2023] Tren del Fin del Mundo
// Southern Fuegian Railway는 세상에서 가장 남쪽에 있는 철도이다.
// Southern Fuegian Railway는 x축의 양의 방향을 동쪽으로 하는 2차원 좌표평면으로 나타내어진다.
// Southern Fuegian Railway는 N개의 역과 역 사이를 잇는 N−1개의 철로로 구성되어 있다. i번째 역은 (xi,yi)에 있으며, j번째 철로는 j번 역과 j+1번 역 사이를 잇는 선분이다. (1 ≤ i ≤ N; 1 ≤ j ≤ N−1) 
// Southern Fuegian Railway를 보러 간 선아는 세상에서 가장 남쪽에 있는 철도가 지나는 가장 남쪽 점이 어디일지 궁금해졌다.
// 제약조건
// 1 ≤ N ≤ 1000
// |xi|, |yi| ≤ 1000
// 입력형식
// 첫 번째 줄에 역의 개수 N이 주어진다.
// 두 번째 줄부터 N개의 줄에 걸쳐서, 역의 좌표를 의미하는 두 정수 xi,yi가 공백으로 구분되어 주어진다.
// 두 역이 같은 위치에 있는 경우는 주어지지 않는다.
// 출력형식
// 첫 번째 줄에 Southern Fuegian Railway가 지나는 가장 남쪽에 있는 점의 x좌표와 y좌표를 공백으로 구분하여 출력한다. 이 점이 유일한 경우만 입력으로 주어진다.

#include <iostream>

using namespace std;

int main(int argc, char** argv){
    unsigned int N ;

    cin>>N;

    int result_y, result_x = 1000;

    for(int count = 0;count < N ; count++ ){
        int x, y;

        cin>>x;
        cin>>y;

        if(y <= result_y){
            result_y = y;
            result_x = x;
        }
    }

    cout<<result_x<<' '<<result_y<<endl;



    return 0;
}