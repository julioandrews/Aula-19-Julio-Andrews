#include <iostream>
#include "neuronio.hpp"
#include "NeuronioReLu.hpp"

int main() {
    std::vector<double> pesos1 = {0.5, -0.2, 0.8};
    double bias1 = 0.1;
    NeuronioReLu neuronio1(pesos1, bias1);
    
    std::vector<double> entradas1 = {-1.0, 1.0, 1.0};
    std::cout << "Saída do neurônio 1: " << neuronio1.predict(entradas1) << std::endl;
    
    std::vector<double> pesos2 = {-3.9, 0.8, 0.2};
    double bias2 = -0.3;
    NeuronioReLu neuronio2(pesos2, bias2);
    
    std::vector<double> entradas2 = {1.0, -3.0, 0.5};
    std::cout << "Saída do neurônio 2: " << neuronio2.predict(entradas2) << std::endl;
    
    return 0;
}