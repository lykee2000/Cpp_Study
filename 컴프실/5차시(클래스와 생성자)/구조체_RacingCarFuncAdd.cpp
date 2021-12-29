// 구조체 예제
// RacingCarFuncAdd.cpp
#include <iostream>
using namespace std;

#define ID_LEN  20
#define MAX_SPD 200
#define FUEL_STEP   2
#define ACC_STEP    10
#define BRK_STEP    10

// 함수를 멤버로 지니는 구조체의 정의를 보이고 있음.
struct Car{
    char gamerID[ID_LEN]; // 소유자 id
    int fuelGauge; //  연료량
    int curSpeed; // 현재 속도

    // 차의 정보를 출력하는 기능의 함수
    void ShowCarState() {
        cout << "소유자ID: " << gamerID<<endl;
        cout << "연료량 : " << fuelGauge<< "%" <<endl;
        cout << "현재 속도 : " << curSpeed<< "km/s" <<endl<<endl;
    }

    // 차의 가속을 위해서 엑셀을 밟은 상황을 표현해 놓은 함수
    // 엑셀을 밟을 때마다 연료가 줄어들고 스피드가 올라가는 상황을 단순히 표현.
    void Accel(){
        if(fuelGauge<=0){
            return;
        }
        else
            fuelGauge -= FUEL_STEP;

        if(curSpeed+ACC_STEP >= MAX_SPD){
            curSpeed = MAX_SPD;
            return;
        }
        curSpeed += ACC_STEP;
    }

    // 브레이크를 밟은 상황을 표현한 함수
    // 브레이크도 연료의 소모가 동반되지만, 단순히 속도가 감소하는 것으로 표현해 놓음.
    void Break(){
        if(curSpeed < BRK_STEP){
            curSpeed = 0;
            return;
        }
        curSpeed -= BRK_STEP;
    }
};

int main(){
    Car run99={"run99", 100, 0}; // 구조체 변수의 선언 및 초기화
    run99.Accel(); // 구조체 run99에 존재하는 accel 함수를 호출하고 있음. 구조체 내에 선언된 변수에 접근하는 방법과 동일한 방식으로 함수의 호출이 이루어짐.
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    Car sped77 = {"sped77", 100, 0}; // 또 다른 구조체 변수를 선언함. 이번에는 이 구조체를 대상으로 accel함수를 호출 하고 있음. -> 구조체 변수를 대상으로 함수의 호출이 이루어짐.
    sped77.Accel();
    sped77.Break();
    sped77.ShowCarState();
    return 0;
}