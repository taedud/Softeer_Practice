// 무궁화 꽃이 피었습니다 게임 룰은 다음과 같습니다.
// 1) 남우와 술래는 처음에 거리 d 만큼 떨어져 있습니다.
// 2) 남우는 술래를 향해 뛰어가 술래를 터치하고 다시 출발선으로 돌아와야 합니다.
// 3) 남우는 술래가 뒤를 돌아보고 있을 때만 움직일 수 있으며, 앞을 바라보고 있을 때는 절대 움직일 수 없습니다.
// 4) 술래는 처음 a 초간은 뒤를 보고 있고, 그 다음 b 초간은 앞을 보고 있고, 다시 a 초간 뒤를, b 초간 앞을, ... 이 과정을 계속 반복합니다.
// 5) 남우가 술래를 터치한 직후, 술래의 움직임은 달라집니다. 터치된 직후 처음 b 초간은 뒤를 보고 있고, 그 다음 a 초간은 앞을 보고 있고, 다시 b 초간 뒤를, a 초간 앞을, ... 이 과정을 계속 반복합니다.
// 6) 술래가 앞, 뒤를 돌아보기 위해 자세를 바꾸는 데 걸리는 시간은 0초라고 가정해도 좋습니다.
// 7) 남우는 최선을 다해 움직이며, 1초에 거리 1만큼 이동이 가능합니다.

#include <iostream>

using namespace std;

int main(int agrc, char** agrv){
    int a , b , d;

    cin>>a;
    cin>>b;
    cin>>d;

    int result = 0;
    int distance = d;
    int go = 1;

    while(true){
        if(go == 1){
            if(distance - a <= 0){
                result += distance;
                distance = 0;
                go = 2;
            }else{
                distance -= a;
                result += a+b;
            }
        }else{
            if(distance + b < d){
                result += a+b;
                distance += b;
            }else{
                result += d - distance;
                break;
            }
        }
    }
    cout<<result;
    return 0;
}