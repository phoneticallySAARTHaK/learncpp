#include <iostream>

using namespace std;

template<typename T>
constexpr T digitSum(T n) {
    return (n < 0) ? digitSum(-n) : (n < 10) ? n : n % 10 + digitSum(n / 10);
}

int main()
{
    cout << digitSum(93427);
    return 0;
}
