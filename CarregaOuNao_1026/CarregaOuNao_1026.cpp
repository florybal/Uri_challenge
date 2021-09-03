//
// Created by lucas on 02/07/2021.
//

#include <iostream>
#include <bitset>

std::string toBinary(int n){
    std::string r;
    while (n !=0){
        r += (n % 2 == 0 ? "0" : "1");
        n /= 2;
    }
    return r;
}

int main(){
    unsigned int n, n2;
/*
    std::cin >> n >> n2;

    std::cout<< n + n2;

    std::bitset<32>bs1 (toBinary(n));
    std::bitset<32>bs2 (toBinary(n2));


    std::cout << "binario: " <<bs1 << std::endl << n;
    std::cout << "\nbinario2: " <<bs2 <<std::endl << n2;
*/
    while(std::cin>>n>>n2){
        std::cout<<(n^n2)<<std::endl;
    }
    return 0;
}