/*
#include <iostream>
#include <vector>

class FiniteField {
public:
    FiniteField(int prime) : p(prime) {}

    int add(int a, int b) const {
        return (a + b) % p;
    }

    int subtract(int a, int b) const {
        return (a - b + p) % p;
    }

    int multiply(int a, int b) const {
        return (a * b) % p;
    }

    int inverse(int a) const {
        return power(a, p - 2);
    }

    int divide(int a, int b) const {
        return multiply(a, inverse(b));
    }

private:
    int p;

    int power(int base, int exp) const {
        int result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % p;
            }
            base = (base * base) % p;
            exp /= 2;
        }
        return result;
    }
};

std::vector<int> lagrangeInterpolation1(const std::vector<int>& x, const std::vector<int>& y, const FiniteField& field) {
    int n = x.size();
    std::vector<int> result(n, 0);

    for (int i = 0; i < n; ++i) {
        int term = y[i];
        for (int j = 0; j < n; ++j) {
            if (i != j) {
                term = field.multiply(term, field.divide(field.subtract(0, x[j]), field.subtract(x[i], x[j])));
            }
        }
        for (int k = 0; k < n; ++k) {
            result[k] = field.add(result[k], term);
            term = field.multiply(term, x[i]);
        }
    }

    return result;
}

int main() {
    int prime = 7; // Example prime modulus
    FiniteField field(prime);

    std::vector<int> x = {1, 2, 3};
    std::vector<int> y = {6, 5, 1};

    std::vector<int> polynomial = lagrangeInterpolation1(x, y, field);

    std::cout << "Reconstructed polynomial coefficients: ";
    for (int coeff : polynomial) {
        std::cout << coeff << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/