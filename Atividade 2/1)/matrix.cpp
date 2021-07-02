
// matrix.cpp
#include "matrix.h"
#include <vector>
// contrutor default - cria uma matriz vazia com nRows = nCols = 0 
Matrix::Matrix(){
 this -> nCols = 0;
 this -> nRows = 0;
 this -> m = nullptr;
}
 
// contrutor parametrico 1 - cria uma matriz com nRows = rows, nCols = cols e
// com todos os elementos iguais a elem (double)
Matrix::Matrix(int rows, int cols, double elem){
    this -> nCols = cols;
    this -> nRows = rows;
    //double matriz[cols][rows];
    this -> m = new double *[rows];
    for (int i=0; i<rows; i++){
        this -> m[i] = new double[cols];
    }

    for (int i=0; i<rows; i++){
        for (int j=0; j<cols; j++){
            this -> m[i][j]=elem;
        }
    }
    
}
// destrutor
Matrix::~Matrix() { 
    //delete this;
}
// obtem o numero de linhas
int Matrix::getRows() const {
return this->nRows;
}
// obtem o numero de colunas
int Matrix::getCols() const {
 return this->nCols;
}
// retorna uma matriz transposta
Matrix Matrix::transpose() {

    Matrix temp;
    temp.m = new double *[this->nCols];
    temp.nCols = this->nRows;
    temp.nRows = this->nCols;

    for (int i=0; i < temp.nRows; i++){
        temp.m[i] = new double[temp.nCols];
    };
    
    for (int i=0; i < temp.nRows; i++){
        for (int j=0; j < temp.nCols; j++){
            temp.m[i][j] = this->m[j][i];
        };
    };
    //


 return (temp);
}
// imprime o conteudo da matriz
void Matrix::print() const {
    for (int i=0; i < this->nRows; i++){
        for (int j=0; j < this->nCols; j++){
            std::cout << this->m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
