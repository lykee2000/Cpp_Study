// 학생 성적 구하기
/* 우선 입력, 처리, 출력이라는 3가지 과정이 필요
    입력으로 3개의 점수를 입력받고 점수들에서 최대 점수와 최소 점수를 찾음
    마지막으로 이 둘의 평균을 구한 뒤 이를 학생의 점수로 설정 */

#include <iostream>
using namespace std;
int main(){
    // 변수 선언
    int score1, score2, score3, min, max, avg;
    
    // 입력
    cout << "첫번째 입력 : ";
    cin >> score1;

    cout << "두번째 입력 : ";
    cin >> score2;

    cout << "세번째 입력 : ";
    cin >> score3;
    
    // 가장 큰 수 찾기
    if ((score1 > score2) && (score1 > score3)){
        max = score1;
    }
    else if ((score2 > score1) && (score2 > score3)){
        max = score2;
    }
    else{
        max = score3;
    }
    // 가장 작은 수 찾기
    if ((score1 < score2) && (score1 < score3)){
        min = score1;
    }
    else if ((score2 < score1) && (score2 < score3)){
        min = score2;
    }
    else{
        min = score3;
    }

    // min, max의 평균 구하기 (홀수일 때만 올림)
    int tmp = min + max;
    if(tmp % 2 == 1){
        tmp +=1;
    }
    avg = tmp / 2;
    
    // 출력
    cout << "입력 한 점수 = " << score1 << ", " << score2 << ", " << score3 << endl;
    cout << "최솟값 : " << min << " 최댓값 : " << max << endl;
    cout << "평균값 : " << avg << endl;
}
