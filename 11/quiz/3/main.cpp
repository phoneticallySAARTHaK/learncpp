#include <iostream>
#include <utility>

using namespace std;

auto swap(auto& a, auto& b) {
    decltype(a) temp{a};
    a = b;
    b = temp;
}

int main()
{
    int b{1}, a{2};
    swap(a, b);
    cout << "b: " << b  << ", a: " << a;
    return 0;
}
