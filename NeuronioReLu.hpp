#ifndef _NEURONIORELU
#define _NEURONIORELU

#include <vector>
#include <algorithm>
#include "neuronio.hpp"

class NeuronioReLu: public Neuronio {
    public:
        NeuronioReLu(const std::vector<double>& pesos, double bias): Neuronio(pesos, bias) {};
        
        double predict(const std::vector<double> entradas) const {
            double soma = bias;
            for (size_t i = 0; i < entradas.size(); ++i) {
            soma += entradas[i] * pesos[i];
            }
            return std::max(0.0, soma);
        };
};


#endif