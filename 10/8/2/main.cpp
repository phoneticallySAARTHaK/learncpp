#include <iostream>

using namespace std;

struct Fraction {
    int num{};
    int den{};
};

Fraction multiply(const Fraction& f1, const Fraction& f2) {
    return {.num = f1.num * f2.num,
            .den = f2.den * f1.den};
}

istream& operator>>(istream& is, Fraction& f) {
    cout << "Enter the numerator: ";
    is >> f.num;
    cout << "Enter the denominator: ";
    is >> f.den;
    return is;
}

ostream& operator<<(ostream& os, const Fraction& f ){
    return os << f.num << "/" << f.den;
}

int main()
{
    Fraction f1, f2;
    cin >> f1 >> f2;
    cout << multiply(f1, f2);
    return 0;
}
