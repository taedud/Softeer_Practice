// 당신의 회사는 자율출퇴근제를 실시하기 때문에 각 직원이 정확히 몇 시에 출근하는 것은 중요하지 않고, 총 근로 시간이 몇 분인지가 중요하다. 총 근로 시간이 법정근로시간을 초과하지 않아야 하면서, 회사와 직원 사이에 계약한 시간 이상이어야 하기 때문이다.
// 직원이 하루 동안 근무한 시간은 출근 시각과 퇴근 시각 사이의 시간으로 정의한다. 이 문제에서는 식사 시간 등 근무 외 시간을 근무 시간에서 제외하지 않음에 유의하라.
// 월요일부터 금요일까지 휴가를 쓰지 않은 직원이 매 요일 언제 출근하고 언제 퇴근했는지가 주어질 때, 이 직원이 5일 동안 총 몇 분을 근무했는지를 구하는 프로그램을 작성하라.
// 제약조건
// 직원은 밤을 새서 일하지 않았다. 즉, 출근 시각과 퇴근 시각은 00:00 이후, 24:00 이전에 이루어졌다.
// 출퇴근 시각은 HH:MM과 같은 형식으로 주어진다.
// HH는 00, 01, 02, .., 22, 23 중 하나이다.
// MM는 00, 01, 02, .., 58, 59 중 하나이다.
// 직원은 매일 1분 이상은 일하였다.
// 입력형식
// 첫 번째 줄에는 월요일에 출근한 시각과 월요일에 퇴근한 시각이 공백 하나를 사이로 두고 주어진다.
// 두 번째 줄에는 화요일에 출근한 시각과 화요일에 퇴근한 시각이 공백 하나를 사이로 두고 주어진다.
// 세 번째 줄에는 수요일에 출근한 시각과 수요일에 퇴근한 시각이 공백 하나를 사이로 두고 주어진다.
// 네 번째 줄에는 목요일에 출근한 시각과 목요일에 퇴근한 시각이 공백 하나를 사이로 두고 주어진다.
// 다섯 번째 줄에는 금요일에 출근한 시각과 금요일에 퇴근한 시각이 공백 하나를 사이로 두고 주어진다.
// 출력형식
// 첫 번째 줄에 직원의 총 근무 시간을 분 단위로 출력한다.

#include <iostream>
#include<string>

using namespace std;

int main(int argc, char** argv){
    string work_hours[10];
    int result = 0;

    for(int i = 0; i < 10; i++){
        cin>>work_hours[i];
    }

    for(int i = 0; i < 10; i+=2){
        int mm;
        int hh;

        hh =stoi(work_hours[i+1].substr(0,2)) - stoi(work_hours[i].substr(0,2));
        mm = stoi(work_hours[i+1].substr(3,2)) - stoi(work_hours[i].substr(3,2));

        if(mm < 0){
            hh -= 1;
            mm = (60 - stoi(work_hours[i].substr(3,2))) + stoi(work_hours[i+1].substr(3,2));
        }
        
        result += (hh*60) + mm;
    }

    cout<<result<<endl;
    return 0;
}