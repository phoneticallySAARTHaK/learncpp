#include <iostream>
#include <span>

using namespace std;

class MessedUp {
public:
    template<typename T>
    auto doWork(const T& p) {
        cout << "const Lref"<< p << endl;
    }

    template<typename T>
    auto doWork(T&& p) {
        cout << "Uref"<< p << endl;
    }
};

int main()
{
    MessedUp m;
    const int i{};

    m.doWork(move(i));
    m.doWork(static_cast<const int&>(0));
    return 0;
}
