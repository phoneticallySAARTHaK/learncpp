#include <iostream>

using namespace std;

auto getNumber() {
    cout << "Enter a number: ";
    double d;
    cin >> d;
    return d;
}

auto getOperator() {
    cout << "Enter one of following operator: +, -, *, / :";
    char c;
    cin >> c;
    return c;
}

int main()
{
    double n1 = getNumber();
    double n2 = getNumber();

    auto op = getOperator();
    switch(op) {
    cout << '\n';
    cout << n1 << ' ' << op << ' ' << n2 << " = ";
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break  ;
    case '/':
        cout << n1 / n2;
        break;
    }

    cout << '\n';

    return 0;
}
