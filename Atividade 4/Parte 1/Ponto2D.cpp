#include <iostream>
#include "Ponto2D.h"
#include <cmath>
    int Ponto2D::cont = 0;


    Ponto2D::Ponto2D(double x = 0.0, double y = 0.0)
    {
        this-> x = x;
        this-> y = y;
        this->id = ++cont;

    }

    Ponto2D Ponto2D::sumOf(Ponto2D &ponto2)
    {
        Ponto2D temp;
        temp.setX(this->getX() + ponto2.getX());
        temp.setY(this->getY() + ponto2.getY());
        return temp;
    };
     Ponto2D::Ponto2D (Ponto2D &ponto2){

        // Ponto2D (ponto2.x, ponto2.y);
        this->x = ponto2.x;
        this->y = ponto2.y;
        this->id = ++cont;
    };
    
    


    void Ponto2D::print()
    {
        std::cout << "Ponto de ID: "<< this->id << " X: "<< this->x << " " << "Y: "<< this->y << std::endl;
    };
    
    void Ponto2D::printSemId()
    {
        std::cout << " X: "<< this->x << " " << "Y: "<< this->y << std::endl;
    };

    double Ponto2D::distToOrig()
    {
        return sqrt(this->x*this->x + this->y*this->x);
    };

    double Ponto2D::distTo(Ponto2D &ponto2)
    {
        return sqrt( pow(this->x-ponto2.x,2) + pow(this->y-ponto2.y,2));

    };

    int Ponto2D::getId(){
        return this->id;
    }

    double Ponto2D::getX(){
        return this->x;
    };

    void Ponto2D::setX(double NewX){
        this->x = NewX;
    };

    double Ponto2D::getY(){
        return this->y;
    };

    void Ponto2D::setY(double NewY){
        this->y = NewY;
    };

    Ponto2D& Ponto2D::operator = (const Ponto2D &p1) {
        Ponto2D aux;
        this->x = p1.x;
        this->y = p1.y;
        this->id = aux.id;
        return *this;
    }