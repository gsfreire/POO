#include <iostream>
#include <cmath>
#include "tempo.h"


using namespace std;

Tempo::Tempo(int d, int h, int m, int s) {
    this->dia = d;
    this->hora = h;
    this->min = m;
    this->seg = s;
    Tempo::Ajuste();
    Tempo::Imprime();
}

void Tempo::Ajuste(){
    
    int divs = this->seg / 60;
    this->min = this->min + divs;
    int restS = this->seg % 60;
    this-> seg = restS;

 
    int divM = this->min / 60;
    this->hora = this->hora + divM;
    int restM = this->min % 60;
    this->min = restM;


    int divH = this->hora / 24;
    this->dia = this->dia + divH;
    int restH = this->hora % 24;
    this->hora = restH;
}

void Tempo::Imprime(){
    std::cout << "Dias: " << this->dia << std::endl << "Horas: " << this->hora << std::endl << "Minutos: " << this->min << std::endl << "Segundos: " << this->seg << std::endl << "-------" << std::endl;
}

void Tempo::Soma(Tempo T2){
    this->dia += T2.dia;
    this->hora += T2.hora;
    this->min += T2.min;
    this->seg += T2.seg;
    this->Ajuste();

}
void Tempo::Inc(){
    this->seg ++;
    this->Ajuste();
}

void Tempo::Dec(){
    this->seg --;
    this->Ajuste();
}

void Tempo::SetDia(int dia){
    this->dia = dia;
    this->Ajuste();
}

void Tempo::SetHora(int hora){
    this->hora = hora;
    this->Ajuste();
}

void Tempo::SetMin(int min){
    this->min = min;
    this->Ajuste();
}

void Tempo::SetSeg(int seg){
    this->seg = seg;
    this->Ajuste();
}

void Tempo::GetDia(){
    std::cout << "Dia: " << this->dia << std::endl;
}

void Tempo::GetHora(){
    std::cout << "Hora: " << this->hora << std::endl;
}

void Tempo::GetMin(){
    std::cout << "Minuto: " << this->min << std::endl;
}

void Tempo::GetSeg(){
    std::cout << "Seg: " << this->seg << std::endl;
}
