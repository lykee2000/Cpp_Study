// /**************************************************************
//  * 원본 변수와 참조 변수를 선언하고                           *
//  * 초기화 한 뒤에 각각의 변수를 사용해                        *
//  * 값에 접근하는 방법을 보여주는 프로그램                     *
//  **************************************************************/
// #include <iostream>
// using namespace std;

// int main()
// {
//   // 참조 관계를 생성
//   int score = 92;
//   int& rScore = score;
//   // 데이터 변수 사용해서 접근
//   cout << "데이터 변수를 사용해서 값에 접근하기" << endl;
//   cout << "score: " << score << endl;
//   // 참조 변수를 사용해서 접근
//   cout << "참조 변수를 사용해서 값에 접근하기" << endl;
//   cout << "rScore: " << rScore;
//   return 0;      
// }
/**************************************************************
 * 참조로 전달을 사용해서                                     *
 * 함수로 전달한 2개의 값을 스왑하는 프로그램                 *
 **************************************************************/
#include <iostream>
using namespace std;

void swap(int& first, int& second);  // 프로토타입

int main()
{
  // 변수 2개 정의
  int x = 10;
  int y = 20;
  // 스왑하기 전에 x와 y의 값 출력
  cout << "스왑하기 전의 x와 y의 값" << endl;
  cout << "x: " << x << "   " << "y: " << y << endl; 
  // swap 함수를 호출해서 변수 x와 y 스왑
  swap(x, y);
  // 스왑 후에 변수 x와 y의 값 출력
  cout << "스왑 후의 x와 y의 값" << endl;
  cout << "x: " << x << "   " << "y: " << y; 
  return 0;
}
/*************************************************************
 * 매개변수로 전달된 값을 스왑하는 swap 함수                 *
 * 참조로 전달을 사용해서                                    *
 * main에서 전달받은 변수의 값을 교환                        *
 *************************************************************/
void swap(int& rX, int& rY)
{
  int temp = rX;
  rX = rY;
  rY = temp;
}