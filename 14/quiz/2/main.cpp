#include <iostream>

using namespace std;

class Average {
private:
    int32_t sum{};
    int8_t count{};

public:

    auto& operator+=(int32_t t) {
        sum += t;
        count++;
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Average& av) {
        return os << static_cast<double>(av.sum) / av.count;
    }
};

int main()
{
    Average avg{};

    avg += 4;
    std::cout << avg << '\n'; // 4 / 1 = 4

    avg += 8;
    std::cout << avg << '\n'; // (4 + 8) / 2 = 6

    avg += 24;
    std::cout << avg << '\n'; // (4 + 8 + 24) / 3 = 12

    avg += -10;
    std::cout << avg << '\n'; // (4 + 8 + 24 - 10) / 4 = 6.5

    (avg += 6) += 10; // 2 calls chained together
    std::cout << avg << '\n'; // (4 + 8 + 24 - 10 + 6 + 10) / 6 = 7

    Average copy{ avg };
    std::cout << copy << '\n';

    return 0;
}
