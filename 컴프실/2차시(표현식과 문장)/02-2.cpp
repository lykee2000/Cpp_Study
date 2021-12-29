// 초 단위의 시간을 시, 분, 초 단위로 변환하기
#include <iostream>
using namespace std;

int main(){
    // 변수 선언
    unsigned long num, hour, minute, second;

    // 입력
    cout << "초 값을 입력 하시오 " << endl;
    cin >> num;

    // 처리
    hour = num / 3600L;
    minute = (num % 3600L) / 60L;
    second = num % 60L;

    // 출력
    cout << "입력 받은 초 값 : " << num << "초"<< endl;
    cout << hour << " 시간 " << minute << " 분 " << second << " 초"<< endl;
    
    return 0;   
}