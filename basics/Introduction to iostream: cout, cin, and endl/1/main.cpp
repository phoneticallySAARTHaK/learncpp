#include <iostream>

int main() {
    std::cout << "Enter a number:";
    int x {}, y{};
    while (1) {
        std::cin >> x;
//     Vulnerable code - std::cin in a loop.
//        On an unexpected output, std::cin goes into fail state, and if not cleared, it'll remain in that.
//        https://stackoverflow.com/questions/5131647/why-would-we-call-cin-clear-and-cin-ignore-after-reading-input
        std::cout << "You entered " << x <<  " and " << y << std::endl;
    }
    return 0;
}
