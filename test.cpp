// 01 - 1
// #include <iostream>

// int main()
// {
//  std::cout << "이 프로그램은 프로그램의 구조를 알아보기 위한 ";
//  std::cout << "간단한 C++ 프로그램입니다." << std::endl;
//  std::cout << "이번 장과 이후의 내용을 통해 "; 
//  std::cout << "C++ 프로그래밍 언어와 관련된 다양한 것을 살펴보겠습니다.";
//  return 0;
// }


// 01 - 2
// /**************************************************************
//  * 별로 사각형을 출력하는 프로그램                            *   
//  **************************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   // 별 기호로 정사각형 출력
//   cout << "******" << endl;
//   cout << "******" << endl;
//   cout << "******" << endl;
//   cout << "******" << endl;
//   cout << "******" << endl;
//   cout << "******";
//   return 0;
// }


// 02
// /************************************************************* 
//  * 키보드로부터 2개의 숫자 값을 입력받은 뒤에               *
//  * 두 값을 더한 후 출력하는 프로그램                          * 
//  *************************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   // 선언
//   int num1;
//   int num2;
//   int sum;
//   // 입력받기   
//   cout << "첫 번째 숫자 입력: "; 
//   cin >> num1;
//   cout << "두 번째 숫자 입력: ";
//   cin >> num2;
//   // 계산과 결과 저장  
//   sum = num1 + num2;
//   // 출력  
//   cout << "두 숫자의 합: " << sum << endl;
//   return 0;
// }


// 04-1
// /*************************************************************
//  * 동전과 지폐들의 금액 합계를 구하는 프로그램               *
//  *************************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   // 상수 정의
//   const unsigned int pennyValue = 1;
//   const unsigned int nickelValue = 5;
//   const unsigned int dimeValue = 10;
//   const unsigned int quarterValue = 25;
//   const unsigned int dollarValue = 100;
//   // 변수 정의(각 코인의 수)
//   unsigned int pennies;
//   unsigned int nickels;
//   unsigned int dimes;
//   unsigned int quarters;
//   unsigned int dollars;
//   // 전체 값을 나타내는 변수 선언
//   unsigned long totalValue;
//   // 코인 입력받기
//   cout << "페니의 수: ";
//   cin >> pennies;
//   cout << "니켈의 수: ";
//   cin >> nickels;
//   cout << "다임의 수: ";
//   cin >> dimes;
//   cout << "쿼터의 수: ";
//   cin >> quarters;
//   cout << "달러의 수: ";
//   cin >> dollars;
//   // 전체 금액 계산
//   totalValue = pennies * pennyValue + nickels * nickelValue + 
//                dimes * dimeValue + quarters * quarterValue + dollars * dollarValue;
//   // 결과 출력
//   cout << "전체 값은 " << totalValue << "페니입니다." ;
//   return 0;
// }


// 04-2
// /**************************************************************
//  * 3회 거래 후의 계좌 잔액을 구하는 프로그램                  *
//  **************************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   // 변수 선언
//   int balance = 0;
//   int transaction;
//   // 첫 번째 거래 후에 잔액 조정
//   cout << "첫 번째 거래 금액 입력: ";
//   cin >> transaction;
//   balance = balance + transaction;
//   // 두 번째 거래 후에 잔액 조정
//   cout << "두 번째 거래 금액 입력: ";
//   cin >> transaction;
//   balance = balance + transaction;
//   // 세 번째 거래 후에 잔액 조정
//   cout << "세 번째 거래 금액 입력: ";
//   cin >> transaction;
//   balance = balance + transaction;
//   // 최종 잔액 출력    
//   cout << "계좌의 최종 잔액은 " << balance << "달러입니다."; 
//   return 0;
// }


// 04-3
// /*************************************************************
//  * 3가지 정수 자료형의 크기를 확인하는 프로그램              *
//  *************************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   cout << "short int의 크기는 " << sizeof(short int) << "바이트입니다." << endl;
//   cout << "int의 크기는 " << sizeof(int) << "바이트입니다." << endl;
//   cout << "long int의 크기는 " << sizeof(long int) << "바이트입니다." << endl;
//   return 0;
// }


// 04-4
// /*************************************************************
//  * 변수를 초기화할 때 리터럴을 사용하는 프로그램            *
//  *************************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   // 변수 선언과 초기화
//   int x = -1245;
//   unsigned int y = 1245;
//   unsigned int z = -2367;
//   unsigned int t = 14.56;
//   // 초기화된 값 출력
//   cout << x << endl;
//   cout << y << endl;
//   cout << z << endl;
//   cout << t;
//   return 0;
// }


// 04-5
// /*************************************************************
//  * 리터럴 값을 단독으로 사용하는 프로그램                    *
//  *************************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   // 변수 선언
//   int x;
//   unsigned long int y;
//   // 할당
//   x = 1456;
//   y = -14567;
//   // 출력
//   cout << x << endl;
//   cout << y << endl;
//   cout << 1234 << endl; 
//   cout << 143267 << endl;  
//   return 0;
// }

// /*************************************************************
//  * 불 변수와 값을 사용하는 프로그램                          *
//  *************************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   // 변수 선언
//   bool x = 123;
//   bool y = -8;
//   bool z = 0;
//   bool t = -0;
//   bool u = true;
//   bool v = false;
//   // 값 출력
//   cout << "x의 값: " << x << endl;
//   cout << "y의 값: " << y << endl;
//   cout << "z의 값: " << z << endl;
//   cout << "t의 값: " << t << endl;
//   cout << "u의 값: " << u << endl;
//   cout << "v의 값: " << v << endl;

//   if (x == false){
//     cout << "True" << endl;
//   }
  
//   return 0;
// }


// /********************************************************* 
//  * 불 자료형에 boolalpha 조정자 사용하기               *
//  *********************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   // 선언
//   bool x = true;
//   bool y = false;
//   // 조정자 없이 출력
//   cout << "기본적인 x의 출력: " << x << endl;
//   cout << "기본적인 y의 출력: " << y << endl;
//   // 조정자 사용하여 출력  
//   cout << "조정자를 사용한 x의 값: " << boolalpha << x << endl;
//   cout << "y의 값: " << y;
//   return 0;      
// } 
// #include <iostream>
// using namespace std;
// void print();
// int sum = 0;
// int main(){
//     cout << sum << endl;
//     sum++;
//     print();
//     cout << sum << endl;
// }
// void print(){
//     cout << sum << endl;
// }

/*************************************************************
 * 객체를 만들고, 만들어진 객체의 수를 세는 프로그램         *
 *************************************************************/
#include <iostream>
using namespace std;
/**************************************************************
 * Rectangle 클래스의 정의                                    *
 **************************************************************/
class Rectangle
{
  private: 
    double length;    
    double height;  
    static int count;    // 정적 데이터 멤버
  public:
    Rectangle(double length, double height);
    Rectangle();
    ~Rectangle();
    Rectangle(const Rectangle& rect);
    static int getCount();   // 정적 멤버 함수
};
// 정적 데이터 멤버 초기화
int Rectangle::count = 0;
/**************************************************************
 * 인스턴스 멤버 함수 정의                                    *
 **************************************************************/
// 매개변수가 있는 생성자 정의
Rectangle::Rectangle(double len, double hgt)
: length(len), height(hgt)
{
  count++;
}
// 기본 생성자 정의  
Rectangle::Rectangle()
: length(0.0), height(0.0)
{
  count++;
}
// 복사 생성자 정의
Rectangle::Rectangle(const Rectangle& rect)
:length(rect.length), height(rect.height)
{
  count++;
}
// 소멸자 정의    
Rectangle::~Rectangle()
{
 count--;
}
/**************************************************************
 * 정적 멤버 함수 정의                                        *
 **************************************************************/
int Rectangle::getCount()
{
  return count;
}
  
/**************************************************************
 * Rectangle 객체를 만들고 수를 세는 애플리케이션             *
 **************************************************************/
int main()
{
//   {
//     Rectangle rect1(3.2, 1.2);           
//     Rectangle rect2(1.5, 2.1);           
//     Rectangle rect3;
//     Rectangle rect4(rect1);
//     Rectangle rect5(rect2);
//     cout << "객체의 수: " << rect5.getCount() << endl;
//   }
    Rectangle rect1(3.2, 1.2);           
    Rectangle rect2(1.5, 2.1);           
    Rectangle rect3;
    Rectangle rect4(rect1);
    Rectangle rect5(rect2);
    cout << "객체의 수: " << rect5.getCount() << endl;

    cout << "객체의 수: " << Rectangle::getCount();
    return 0;
}