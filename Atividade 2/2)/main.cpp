#include <iostream>
#include <cmath>
#include "tempo.cpp"

using namespace std;

int main() {

    Tempo T;
    Tempo T1(72);
    Tempo T2(90, 3);
    Tempo T3(4, 7,55);
    Tempo T4(45, 30, 56, 65);

    T4.Soma(T3);
    T4.Imprime();

    T4.Inc();
    T4.Imprime();

    T4.Dec();
    T4.Imprime();

    T.SetDia(999);
    T.SetHora(999);
    T.SetMin(999);
    T.SetSeg(999);
    T.GetDia();
    T.GetHora();
    T.GetMin();
    T.GetSeg();

   return 0;
}