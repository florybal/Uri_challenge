// a + b - c + d

#include <iostream>
int dif(int a, int b, int c, int d){
    return ((a*b) - (c*d));
}

int main(){
    int a, b, c, d;

    std::cout<<"Digite um valor para a: ";
    std::cin>>a;
    std::cout<<"Digite um valor para b: ";
    std::cin>>b;
    std::cout<<"Digite um valor para c: ";
    std::cin>>c;
    std::cout<<"Digite um valor para d: ";
    std::cin>>d;

    std::cout<<"Diferenca= " << dif(a, b, c, d);
}