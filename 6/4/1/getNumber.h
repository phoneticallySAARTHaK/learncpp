#ifndef GETNUMBER_H
#define GETNUMBER_H

#include <iostream>

using namespace std;

auto getNumber(const char * message){
    cout << message;
    int n{};
    cin >> n;
    return n;
}

#endif // GETNUMBER_H
