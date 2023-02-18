#include <iostream>
#include <iomanip>

using namespace std;

struct Ads {
    int shown{};
    double clicked{};
    double revenue{};
};

Ads getValue() {
    Ads temp;
    std::cout << "How many ads were shown today? ";
    std::cin >> temp.shown;
    std::cout << "What percentage of ads were clicked on by users? ";
    std::cin >> temp.clicked;
    std::cout << "What was thse average earnings per click? ";
    std::cin >> temp.revenue;
    return temp;
}

void printAdvertising(const Ads ad)
{
    cout << setprecision(2);
    std::cout << "Number of ads shown: " << ad.shown << '\n';
    std::cout << "Click through rate: " << ad.clicked << '\n';
    std::cout << "Average earnings per click: $" << ad.revenue << '\n';

    std::cout << "Total Earnings: $" <<
        (ad.shown * ad.clicked * ad.revenue) << '\n';
}

int main()
{
    printAdvertising(getValue());
    return 0;
}
