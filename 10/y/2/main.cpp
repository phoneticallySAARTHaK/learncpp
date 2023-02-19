#include <iostream>
#include <string>

using namespace std;

int main()
{
  std::string str{ "I saw a red car yesterday." };

  const auto what{"red"sv};
  const auto with{"blue"sv};

  str.replace(str.find(what), what.length(), with);

  std::cout << str << '\n'; // I saw a blue car yesterday.

  return 0;
}
