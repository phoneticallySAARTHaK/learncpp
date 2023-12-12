#include <iostream>

using namespace std;

constexpr long long factorial(long long n) {
    return (n < 0) ? 0 : (n < 3) ? n : n * factorial(n - 1);
}

consteval auto atCompile(auto fn) {
    return fn;
}

int main()
{
    constexpr int x{5};
    cout <<  atCompile(factorial(x));
    return 0;
}
