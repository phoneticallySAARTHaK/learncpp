#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
class Point2d {
public:
    T m_x;
    T m_y;

    Point2d(T x = {}, T y = {})
        : m_x{x}, m_y{y}
    {}

    void print() {
        cout << "Point2d"
                "(" << m_x << ", " << m_y << ")";
    }

    using P = const Point2d&;

    friend auto distanceFrom(P p, P q) {
        return hypot( (q.m_x - p.m_x) , (q.m_y - p.m_y) );
    }
};

int main() {
    Point2d p{0, 0};
    cout << distanceFrom(p, {3, 4});
}
