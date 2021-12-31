// 입력받은 숫자의 합과 곱 구하기
# include <iostream>
# include <iomanip> // 조정자 사용
using namespace std;

int main(){
    // 선언
    int size; // 반복 횟수
    long double num;
    long double sum, product;

    // 입력
    do{
        cout << "입력할 숫자가 음수가 아닌 정수를 입력하시오" << endl;
        cin >> size;
    }while (size < 0);

    // 처리
    sum = 0;
    product = 1;

    for(int i = 1; i <= size; i++){
        cout << " 숫자를 입력하시오 : ";
        cin >> num;

        sum += num;
        product *= num;
    }

    // 출력
    cout << fixed << setprecision(2);
    cout << "합한 값 : " << sum << endl;
    cout << "곱한 값 : " << product << endl;

    return 0;
}