#include <iostream>
using namespace std;

class B;   

class A {
    int x;
public:
    A(int x) { this->x = x; }
    friend void swap(A &, B &);
    void show() { cout << "A: " << x << endl; }
};

class B {
    int y;
public:
    B(int y) { this->y = y; }
    friend void swap(A &, B &);
    void show() { cout << "B: " << y << endl; }
};

void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a(10);
    B b(20);

    swap(a, b);

    a.show();
    b.show();
}
