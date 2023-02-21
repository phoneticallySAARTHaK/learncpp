#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using namespace std::ranges;

struct Student {
    string name;
    int grade{};
};



int main()
{
    cout << "How many students do you want to enter? ";
    int total{};
    cin >> total;

    vector<Student> students(total);

    for_each(students, [](auto& c) {
        static int i{};
        cout << "Enter the name of student " << ++i << ": ";
        cin >> c.name;
        cout << "Enter the grades of student " << i << ": ";
        cin >> c.grade;
    });

    sort(students, [](const auto& a, const auto& b) {
        return a.grade > b.grade;
    });

    for_each(students, [](const auto& c) {
        cout << c.name << " got a grade of " << c.grade << '\n';
    });
}
