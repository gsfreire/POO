// main.cpp
#include <iostream>
#include <string>
#include <fstream>
#include "matrix.cpp"
#include <vector>

using namespace std;

int main()
{
 ifstream externo("myMatrix.txt");
 Matrix Y(3,2,7); //Adicionei o 7 para poder preencher a matriz. 
 Matrix X(4,1); //Na descrição da atividade não tinha a inicialização com apenas 2 valores.
 Y.set(1,1,12);
 Matrix A(externo);

 cout << "Numero de linhas de A: " << A.getRows() << endl;
 cout << "Numero de colunas de A: " << A.getCols() << endl;
 A.print();

 cout << "Y: " << endl;
 Y.print();
 cout << "Numero de linhas de Y: " << Y.getRows() << endl;
 cout << "Numero de colunas de Y: " << Y.getCols() << endl;
 
 cout << "Z eh transposta de Y: " << endl;
 Matrix Z = Y.transpose();
 Z.print();
 cout << "Numero de linhas de Z: " << Z.getRows() << endl;
 cout << "Numero de colunas de Z: " << Z.getCols() << endl;
 
 cout << "X: " << endl;
 X.print();
 
 cout << "Numero de linhas de X: " << X.getRows() << endl;
 cout << "Numero de colunas de X: " << X.getCols() << endl;
 
 Y.unit();
 cout << "Matriz identidade de Y: " << endl;
 Y.print();

 Y.zeros();
 cout << "Matriz de 0: " << endl;
 Y.print();

 Y.ones();
 cout << "Matriz de 1: "<< endl;
 Y.print();

 Matrix Q ( 7, 7);
 
 Q.unit();
 cout << "Matriz identidade de Q: " << endl;
 Q.print();


 return 0;
}