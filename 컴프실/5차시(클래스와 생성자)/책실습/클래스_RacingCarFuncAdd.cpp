// 클래스 예제
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

// 클래스 선언
class Car{
    // 이어서 등장하는 변수와 함수는 private에 해당하는 범위 내에서(클래스 내에서만) 접근 가능.
    private:
        char gamerID[CAR_CONST::ID_LEN]; // 소유자 id
        int fuelGauge; // 연료량
        int curSpeed; // 현재 속도
    // 이어서 등장하는 변수와 함수는 public에 해당하는 범위 내에서(어디서든) 접근 가능.
    public:
        void InitMembers(char * ID, int fuel);
        void ShowCarState();
        void Accel();
        void Break();
};

/* 클래스 안에 선언된 변수의 초기화를 목적으로 정의된 함수. 변수가 모두 private으로 선언되어서 main함수에서 접근이 불가능.
    하지만 이 함수는 동일 클래스 내에 정의된 함수이므로 접근 가능. 뿐만 아니라 이 함수는 public으로 선언되어서 main 함수에서 호출 가능. 
    따라서 main함수에서는 이 함수의 호출을 통해서 클래스 안에 선언된 변수를 초기화 가능.
*/
void Car::InitMembers(char * ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge = fuel;
    curSpeed = 0;
}
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
    Car run99; // 구조체 변수의 선언 및 초기화
    run99.InitMembers("run99",100); // 초기화 목적으로 initmemers 함수 호출하고 있음. 이 함수는 Id정보와 연료의  게이지 정보를 전달 받아서 초기화되는 형태로 정의되었음. 단, 변수 curSpeed는 무조건 0으로 초기화 되도록 정의됨.
    // 함수호출이 가능한 이유는 함수가 모두 public으로 선언되었기 때문.
    run99.Accel(); 
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();

    return 0;
}