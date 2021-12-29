// 구조체 예제
// RacingCarFuncAdd.cpp
#include <iostream>
using namespace std;

// CAR_CONST 이름공간 안에 구조체 Car에서 사용하는 상수들을 모두 모아놓음.
namespace CAR_CONST{
    enum{
        ID_LEN      =20,
        MAX_SPD     =200,
        FUEL_STEP   =2,
        ACC_STEP    =10,
        BRK_STEP    =10
    };
}

// 함수를 멤버로 지니는 구조체의 정의를 보이고 있음.
struct Car{
    /*상수 ID_LEN의 접근을 위해서 이름공간 CAR_CONST를 지정함.이름공간을 지정해서 코드를 작성했기 때문에, 
    이 문장만 봐도 이 상수가 어느 영역에서 선언되고 사용되는 상수인지 쉽게 알 수 있게됨. -> 가독성 좋아짐*/
    char gamerID[CAR_CONST::ID_LEN]; // 소유자 id
    int fuelGauge; // 연료량
    int curSpeed; // 현재 속도

    // 구조체 안에 함수의 원형만 남으니, 함수의 종류가 한눈에 들어오고, 적절한 주석을 통해서 함수의 기능도 쉽게 판단이 됨.
    void ShowCarState();
    void Accel();
    void Break();
};
// 차의 정보를 출력하는 기능의 함수
// 원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 빠져 나왔음.
void Car::ShowCarState() {
    cout << "소유자ID: " << gamerID<<endl;
    cout << "연료량 : " << fuelGauge<< "%" <<endl;
    cout << "현재 속도 : " << curSpeed<< "km/s" <<endl<<endl;
}

// 차의 가속을 위해서 엑셀을 밟은 상황을 표현해 놓은 함수
// 엑셀을 밟을 때마다 연료가 줄어들고 스피드가 올라가는 상황을 단순히 표현.
// 원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 빠져 나왔음.
void Car::Accel(){
    if(fuelGauge<=0){
        return;
    }
    else
        fuelGauge -= CAR_CONST::FUEL_STEP;

    if(curSpeed+CAR_CONST::ACC_STEP >= CAR_CONST::MAX_SPD){
        curSpeed = CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed += CAR_CONST::ACC_STEP;
}

// 브레이크를 밟은 상황을 표현한 함수
// 브레이크도 연료의 소모가 동반되지만, 단순히 속도가 감소하는 것으로 표현해 놓음.
// 원래 속하는 구조체의 이름을 명시하면서 구조체 밖으로 함수의 정의가 빠져 나왔음.
void Car::Break(){
    if(curSpeed < CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed -= CAR_CONST::BRK_STEP;
}

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