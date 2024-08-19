#ifndef FF_RECONS_H
#define FF_RECONS_H

#include <vector>

class FiniteField {
public:
    FiniteField(int prime);
    int add(int a, int b) const;
    int subtract(int a, int b) const;
};

std::vector<int> lagrangeInterpolation(const std::vector<int>& x, const std::vector<int>& y, const FiniteField& field);

#endif // FF_RECONS_H
