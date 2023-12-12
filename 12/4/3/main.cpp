#include <iostream>
#include <concepts>

using namespace std;

auto dec2bin(integral auto n) {
    if (n == 0) {
        return;
    }
    dec2bin(n / 2);
    cout << n % 2;
    return;
}

int main()
{
    dec2bin(2);
    return 0;
}
