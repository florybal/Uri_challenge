//calculo de esfera: (4/3) * pi * R³. Considere (atribua) para pi o valor 3.14159. 

#include <iostream>

int main(){
    int raio;
    float pi = 3.14159;
    std::cin>>raio;
    double volume =  (pi * (4/3.0)) * (raio*raio*raio);

    std::cout<<"Volume= " << volume <<std::endl;
}