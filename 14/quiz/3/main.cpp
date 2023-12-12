#include <iostream>
#include <cstring>

class IntArray {
private:
    int count{};
    int* pArr;

public:
    IntArray(int _count)
        : count{_count},
          pArr{new int[_count]}  {}

    IntArray(const IntArray& a) {
        delete[] pArr;
        count = a.count;
        pArr = new int[count];
        memcpy(pArr, a.pArr, sizeof(int) * count);
    };

    int& operator[](int i) {
        return pArr[i];
    }

    IntArray& operator=(const IntArray& a) {
        *this = IntArray(a.count);
        return *this;
    }

};

IntArray fillArray()
{
    IntArray a(5);

    a[0] = 5;
    a[1] = 8;
    a[2] = 2;
    a[3] = 3;
    a[4] = 6;

    return a;
}

int main()
{
    IntArray a{ fillArray() };
    std::cout << a << '\n';

    auto& ref{ a }; // we're using this reference to avoid compiler self-assignment errors
    a = ref;

    IntArray b(1);
    b = a;

    std::cout << b << '\n';

    return 0;
}
