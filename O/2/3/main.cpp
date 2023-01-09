#include <iostream>
#include <bitset>

using namespace std;
#define LEFT 0
#define RIGHT 1

auto rotate(auto b, int bits, auto direction) {
    const auto size = b.size();
    const auto efBits = bits % size;
    return direction == LEFT ? (b << efBits) | (b >> size - efBits) : (b >> efBits) | (b << size - efBits);
}

int main()
{
    bitset<4> b{3};
    cout << rotate(b, 7, RIGHT);
    return 0;
}
