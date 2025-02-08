#ifndef _NEURONIO
#define _NEURONIO

#include <vector>

class Neuronio {
protected:
    std::vector<double> pesos;
    double bias;

public:
    Neuronio(const std::vector<double>& pesos, double bias) 
        : pesos(pesos), bias(bias) {}

    virtual double predict(const std::vector<double> entradas) const = 0;
    virtual ~Neuronio() {}
};

#endif