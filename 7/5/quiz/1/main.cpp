#include <iostream>

using namespace std;

enum class op_enum {
    add,
    sub,
    mul,
    div,
    mod
};


auto calculate(auto x, auto y, op_enum op) {
    switch(op) {
    case op_enum::add:
        return x + y;

    case op_enum::div:
        return x / y;

    case op_enum::mul:
        return x * y;

    case op_enum::sub:
        return x - y;

    case op_enum::mod:
        return x % y;
    }
}

int main()
{
    calculate(1, 2, op_enum::div);
    return 0;
}
