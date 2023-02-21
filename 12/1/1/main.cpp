#include <iostream>
#include <functional>
using ArithmeticFunction = std::function<int(int, int)>;

int getInteger()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}


char getOperation()
{
    char op{};

    do
    {
        std::cout << "Enter an operation ('+', '-', '*', '/'): ";
        std::cin >> op;
    }
    while (op!='+' && op!='-' && op!='*' && op!='/');

    return op;
}


int main()
{
    int x{ getInteger() };
    char op{ getOperation() };
    int y{ getInteger() };

    std::cout << x << ' ' << op << ' ' << y << " = " << [=]{
        switch(op) {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            abort();
        }
    }() << '\n';
    return 0;
}
