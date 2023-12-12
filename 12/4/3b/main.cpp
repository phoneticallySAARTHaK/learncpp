#include <iostream>
#include <algorithm>
using namespace std;

void dec2bin(uint n) {
    if (n < 2) {
        cout << n;
        return;
    }

    dec2bin(n / 2);
    cout << n % 2;
    return;
}
all_of()

int main()
{
    dec2bin(10);
    return 0;
}
