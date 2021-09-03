/*
Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
    a) a área do triângulo retângulo que tem A por base e C por altura.
    b) a área do círculo de raio C. (pi = 3.14159)
    c) a área do trapézio que tem A e B por bases e C por altura.
    d) a área do quadrado que tem lado B.
    e) a área do retângulo que tem lados A e B. 
*/
#include <iostream>
float pi = 3.14159;

float areaC(float pi, float C){
    return pi * C;
}
float AC (float A, float C){
    return A*C / 2;
}
float areaT(float A, float B, float C){
    return (A+B) * C / 2;
}
float area(float B){
    return B*B/2;
}
float areaR(float A, float B){
    return A*B;
}

int main(){
    float A, B, C;
    std::cout<<"Informe tres spontos"<<std::endl;
    std::cin >> A;
    std::cin >> B;
    std::cin >> C;

    std::cout<<AC(A, C) << std::endl;
    std::cout<<areaC(pi,C) << std::endl;
    std::cout<<areaT(A, B, C);
    std::cout<<area(B); 
    std::cout<<areaR(A, B);
}
