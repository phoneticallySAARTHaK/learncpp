#include <iostream>
#include <bitset>

using namespace std;
#define LEFT 0
#define RIGHT 1

auto rotate(auto b, int bits, auto direction) {
    const auto size = b.size();
    const auto efBits = bits % size;
    for (auto i {0}; i < efBits; i--){
        const auto msb = b[size - 1];
        b = direction == LEFT ? b << 1 : b  >> 1;
        b.set(0, msb);
    }
    return b;
}

int main()
{
    bitset<4> b{3};
    cout << rotate(b, 7, RIGHT);
    return 0;
}
