#include <iostream>

class Ponto2D {
    private: 
    double x = 0.0, y = 0.0;
    int id;
    static int cont;
    
    

    public:
    Ponto2D (Ponto2D &ponto2);
    Ponto2D (double x, double y);
    Ponto2D sumOf(Ponto2D &ponto2);

    int getId();

    double getX();
    void setX(double NewX);

    double getY();
    void setY(double NewY);

    //~Ponto2D();

    void print();
    void printSemId();

    double distToOrig();
    double distTo(Ponto2D &ponto2);
    
    Ponto2D& operator = (const Ponto2D &p1);
};

