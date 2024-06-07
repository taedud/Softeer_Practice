// 산타는 연탄 배달을 시작하려고 합니다. 이 도시에는 n개의 마을이 있고, 각 마을은 1차 수직선 상에 위치하고 있습니다.
// 산타는 이 마을들 중 가장 거리가 가까운 두 마을을 먼저 방문한다고 했을 때, 산타가 처음 방문할 가능성이 있는 서로 다른 두 마을 조합의 수를 구하는 프로그램을 작성해보세요.
// 본 문제의 저작권은 (주)브랜치앤바운드에 있으며, 저작자의 동의 없이 무단 전재/복제/배포를 금지합니다.
// 제약조건
// 2 ≤ n ≤ 1,000
// 1 ≤ 마을의 위치 ≤ 1,000,000
// 입력형식
// 첫 번째 줄에는 마을의 수를 나타내는 n이 주어집니다.
// 두 번째 줄에는 n개의 마을의 위치가 공백을 사이에 두고 주어집니다. 마을의 위치는 서로 다르며, 이 위치들은 오름차순으로 주어진다고 가정해도 좋습니다.
// 출력형식
// 첫 번째 줄에 산타가 처음 방문할 가능성이 있는 서로 다른 두 마을 조합의 수를 출력합니다.

#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv){
    int n;

    cin>>n;
    
    int* location = new int[n];
    int min = 1000001;
    int check = 0;
    int diff ;
    for(int count = 0; count < n; count++){
        cin>>location[count];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = i +1 ; j <= n-1; j++){
            diff = abs(location[j]-location[i]);
            if(min > diff){
                min = diff;
                check = 1;
            }else if (min == diff){
                check++;
            }
        }
    }

    cout<<check;
    return 0;
}