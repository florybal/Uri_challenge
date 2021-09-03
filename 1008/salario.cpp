// nF= nº Funcionarios, vH = valor por h, rH= quanto recebe por h
// 
#include <iostream>
#include <cmath>

int main(){
    int nF;
    int H = 0;
    float rH;

    std::cout<<"Digite a quantidade de funcionarios da empresa: ";
    std::cin>>nF;
    
    std::cout<<"Digite a quantidade de horas: ";
    std::cin>> H;

    std::cout<<"Recebe quanto por hora:  ";
    std::cin>> rH;
    
    float salario = rH * H;
    std::cout<<"Number: "<<nF<< std::endl;
    std::cout<< "Salario: " << (salario * 100) / 100;

}