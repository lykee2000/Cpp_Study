// 부동 소수점 분해하기
#include <iostream>
using namespace std;

int main(){
    // 변수 선언
    double num;
    int iValue;
    double fValue;

    // 입력
    cout << "실수값을 입력하시오" << endl;
    cin >> num;

    // 처리
    iValue = static_cast<int>(num); // 정수타입 형변환
    fValue = num - iValue; // 소수점

    // 출력
    cout << "입력 값 : " << num << endl;
    cout << "정수 값 : " << iValue << endl;
    cout << "소수점 밑의 값 : " << fValue << endl;

    return 0;
}