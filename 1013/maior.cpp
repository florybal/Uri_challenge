/*Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem 
“eh o maior”. Utilize a fórmula:
MaiorAB=(a+b+abs(a-b))/2

Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é 
necessário para chegar no resultado esperado.*/
//3 valores
#include <iostream>
#include <cmath>
int MaiorAB(int a, int b){
    return (a+b + abs(a-b)/2);
}

int main(){
    int a,b;

    std::cin>>a;
    std::cin>>b;

    if(a>b){
        return ? std::cout>>"a eh maior" : std::cout>>"b ehmaior";
    }
}

