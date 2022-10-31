
#include <iostream>

void print(const Complex &c);
void nothing();

class Complex {
    float real, imag;
public:
    Complex(float r=0, float i=0) : real(r), imag(i) {}
    
    friend void print(const Complex &c);
    friend void nothing();
};

void nothing() {
    std::cout << "Nothing.\n";
}

void print(const Complex &c) {
    std::cout << "[Real]: " << c.real << '\n';
    std::cout << "[Imag]: " << c.imag << '\n';
}