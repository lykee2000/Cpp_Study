// 빈도 배열과 히스토그램 만들기
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    const int CAPACITY = 10;
    int frequecy[CAPACITY] = {0};

    ifstream integerFile;
    integerFile.open("inFile.txt");
    if(!integerFile){
        cout << "Error. Integer file cannot be opened." << endl;
        cout << "The program is terminated." << endl;
        return 0;
    }

    int data;
    int size = 0;
    while(integerFile >> data){
        if(data >= 0 && data <= 9){
            size++;
            frequecy[data] ++;
        }
    }

    integerFile.close();
    cout << "There are " << size << "valid data items." << endl;

    for(int i=0; i<10; i++){
        cout << setw(3) << i << " ";
        for (int f = 1; f <= frequecy[i]; f++){
            cout << '*';
        }
        cout << " " << frequecy[i] << endl;
    }
    return 0;
}