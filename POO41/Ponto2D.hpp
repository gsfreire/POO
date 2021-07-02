#ifndef PONTO_2D
#define PONTO_2D

#include<list>

class Ponto2D {  
  private:
    double _x;
    double _y;
    int _id ;
    static std::list<int> list_ids;
  
  public:
    Ponto2D();
    Ponto2D(double a, double b);
    Ponto2D(Ponto2D const &p1);
    ~Ponto2D();
    void print() const;
    double distToOrig();
    double distTo(const Ponto2D &p1);
    Ponto2D sumOf(const Ponto2D &p2);
    int getId();
    int getNextId();

    Ponto2D& operator = (const Ponto2D &p1);
};

#endif