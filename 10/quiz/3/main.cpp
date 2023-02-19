#include <iostream>

using namespace std;

template<typename T>
struct Triad {
    T one{};
    T two{};
    T three{};
};

template<typename T>
Triad(T, T, T) -> Triad<T>;

int main()
{
    Triad t1{ 1, 2, 3 }; // note: uses CTAD to deduce template arguments

    cout << t1.one << t1.two << t1.three;
}
