// part A
#include <iostream>
using namespace std;

class Number {
public:
    int x;
    Number(int x) { this->x = x; }
};

Number modify(Number n) {
    n.x += 10;
    return n;
}

int main() {
    Number n1(5);
    Number n2 = modify(n1);

    cout << n2.x;
}

// part B
#include <iostream>
using namespace std;

class Number {
public:
    int x;
    Number(int x) { this->x = x; }
};

Number modify(Number *n) {
    n->x += 10;
    return *n;
}

int main() {
    Number n1(5);
    Number n2 = modify(&n1);

    cout << n2.x;
}
