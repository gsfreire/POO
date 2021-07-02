// main.cpp
#include <iostream>
#include <string>
#include "matrix.cpp"
#include <vector>

using namespace std;

int main()
{
 Matrix Y(3,2,7); //Adicionei o 7 para poder preencher a matriz. 
 Matrix X(4,1,7); //Na descrição da atividade não tinha a inicialização com apenas 2 valores.
 
 std::cout << "Y:: " << std::endl;
 Y.print();
 std::cout << "Numero de linhas de Y:: " << Y.getRows() << endl;
 std::cout << "Numero de colunas de Y:: " << Y.getCols() << endl;
 
 std::cout << "Z eh transposta de Y:: " << std::endl;
 Matrix Z = Y.transpose();
 Z.print();
 std::cout << "Numero de linhas de Z:: " << Z.getRows() << endl;
 std::cout << "Numero de colunas de Z:: " << Z.getCols() << endl;
 
 std::cout << "X:: " << std::endl;
 X.print();
 
 std::cout << "Numero de linhas de X:: " << X.getRows() << endl;
 std::cout << "Numero de colunas de X:: " << X.getCols() << endl;
 
 return 0;
}