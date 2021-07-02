
#include "matrix.h"
Matrix::Matrix(){
 this -> nCols = 0;
 this -> nRows = 0;
 this -> m =nullptr ;
}
 
Matrix::Matrix(int rows, int cols , double elem){
    this -> nCols = cols;
    this -> nRows = rows;
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
Matrix::Matrix (std::ifstream &myFile){
    std::string linha;
    this->nCols = 0;
    this->nRows = 0;
    int i = 0;

    myFile >> linha;
    this->nRows = stoi(linha);

    myFile >> linha;
    this->nCols = stoi(linha);

    m = new double *[this->nRows];

    for (int i = 0; i < this->nRows; i++) {
        this->m[i] = new double[this->nCols];
    }

    for (i = 0; i < this->nRows; i++) {
        for (int j = 0; j < this->nCols; j++) {
            myFile >> linha;
            this->m[i][j] = stod(linha);
        }
    }

};


Matrix::Matrix (const Matrix &that){
    this->nCols = that.getCols();
    this->nRows = that.getRows();
    for (int i=0; i<this->nRows; i++){
        for (int j=0; j<this->nCols; j++){
            this->m[i][j]=that.get(i, j);
        }
    }
    
};


// destrutor
Matrix::~Matrix() { 
    for (int i=0; i< this->nRows; i++){
        delete this->m[i];
    }
    delete m;
}
void Matrix::set(int row, int col, const double value){
    this -> m[row][col] = value;
};

int Matrix::getRows() const {
    return this->nRows;
}
int Matrix::getCols() const {
    return this->nCols;
}
double Matrix::get(int row, int col) const {
    return this->m[row][col];
}

Matrix Matrix::transpose() {
    Matrix temp(this->getCols(),this->getRows());
    
    for (int i=0; i < temp.getRows(); i++){
        for (int j=0; j < temp.getCols(); j++){
            temp.set(i,j,this->m[j][i]);
        };
    };
return temp;
}

void Matrix::print() const {
    for (int i=0; i < this->getRows(); i++){
        for (int j=0; j < this->getCols(); j++){
            std::cout <<" "<< this->m[i][j] << "";
        }
        std::cout << std::endl;
    }
}

 void Matrix::unit(){
     if (this->getRows() == this->getCols()){
    for (int i=0; i < this->getRows(); i++){
        for (int j=0; j < this->getCols(); j++){
            (i==j) ? this->set(i, j, 1) : this->set(i, j, 0);
        }
    }
     } else {
         std::cout<< "Matriz identidade deve ser quadrada" << std::endl;
     }
 };
 void Matrix::zeros(){
    for (int i=0; i < this->getRows(); i++){
        for (int j=0; j < this->getCols(); j++){
            this->set(i, j, 0);
        }
    }
 };
 void Matrix::ones(){
    for (int i=0; i < this->getRows(); i++){
        for (int j=0; j < this->getCols(); j++){
            this->set(i, j, 1);
        }
    }
 };
