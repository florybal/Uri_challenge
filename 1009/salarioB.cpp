#include <iostream>
#include <string>
int main()
{
     nome;
    int salario;
    float totalV;

    std::cout<<"Digite seu nome: "<<std::endl;
    std::cin>>nome;

    std::cout<<"Digite seu salario: ";
    std::cin>>salario;

    std::cout<<"ganhos do mes: "<<std::endl;
    std::cin>>totalV;

    std::cout<< "total = RS " << ((15*totalV)/100) + salario;
}