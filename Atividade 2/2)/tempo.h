#ifndef TEMPO_H
#define TEMPO_H

#include "tempo.h"


class Tempo {

    private:

        int dia, hora, min, seg;

    public:
        Tempo (int d = 0, int h = 0, int m = 0, int s = 0);
        void Ajuste();
        void Imprime();
        void Soma(Tempo);
        void Inc();
        void Dec();
        void SetDia(int dia);
        void SetHora(int hora);
        void SetMin(int min);
        void SetSeg(int seg);
        void GetDia();
        void GetHora();
        void GetMin();
        void GetSeg();

};


#endif