#include <iostream>

using namespace std;

auto sumTo(auto to) {
    decltype(to) sum{};
    for (auto i{sum}; i <= to; i++) sum += i;
    return sum;
}

int main()
{
    cout << sumTo(-20);
}
