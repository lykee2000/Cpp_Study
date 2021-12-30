#include "fraction.h"

Fraction& larger(Fraction&, Fraction&);

int main(){

    Fraction fract1(3,13);
    Fraction fract2(5,17);
    cout << "Larger of the first pair of fraction: " ;
    larger(fract1,fract2).print();

    Fraction fract3(4,9);
    Fraction fract4(1,6);
    cout << "Larger of the second pair of fraction: " ;
    larger(fract3,fract4).print();

    return 0;
}

Fraction& larger(Fraction& fract1,Fraction& fract2){
    if(fract1.getNumer() * fract2.getDenom() > fract2.getNumer() * fract1.getDenom()){
        return fract1;
    }
    return fract2;
}