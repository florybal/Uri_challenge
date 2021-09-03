// media com 3 valores com double
#include <iomanip>
#include <iostream>

double media(double a, double b, double c){
    return (a+b+c)/3;
}

int main()
{
    
    double a, b, c;
    std::cout<<"Digite um valor para a: ";
    std::cin>>a;
    std::cout<<"Digite um valor para b: ";
    std::cin>>b;
    std::cout<<"Digite um valor para c: ";
    std::cin>>c;

    std::cout<<"Media final: ";
    std::cout<<media(a, b, c);
}