#include <iostream>
using namespace std;

auto isEven(auto n) {
	return (n % 2 == 0) ? true : false;
}

auto getInteger(){
	cout << "Enter an integer: ";
	auto c{0};
	cin >> c;
	return c;
}



int main() {
	auto number{getInteger()};
	cout << number << " is " << (isEven(number) ? "even" : "odd") << '\n';
}
