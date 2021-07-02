#include <iostream>
#include "Ponto2D.cpp"

int main()
{
    Ponto2D *Ponto;
    int max = 5;
    Ponto = new Ponto2D[max];

    for (int i=0; i<max; i++){
        Ponto[i].setX(3*i);
        Ponto[i].setY(4*i);
        Ponto[i].print();

        

    }
    Ponto2D p1; // inicializa o ponto2D p1 com as coordenadas x = 0.0 e y = 0.0;
    Ponto2D p2 (3.0, 4.0); // inicializa o ponto2D p2 com as coordenadas x = 3.0 e y = 4.0;
    Ponto2D p3 (7, 12);
    Ponto2D p4 (4);
    Ponto2D p5 (p2);
    Ponto2D p6 = p3;



    p1.print();
    p2.print();
    p3.print();
    p4.print();

    std::cout << "Distancia do ponto de ID "<< Ponto[4].getId() <<" ate o 0: "<< Ponto[4].distToOrig() << std::endl;
    std::cout << "Distancia p4 a p2: "<< p4.distTo(p2) << std::endl;
    p4 = p4.sumOf(p2);
    std::cout << "Soma entre os pontos p4 e p2: ";
    p4.printSemId();
    std::cout << std::endl;
    p5.print();
    p6.print();


    

    delete Ponto;
    return 0;
}