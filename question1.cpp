#include <iostream>
using namespace std;

class Student {
    int marks;
public:
    void set(int marks) {
        this->marks = marks;   
    }
    void show() {
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;
    Student *ptr = &s;   

    s.set(90);      
    s.show();

    ptr->set(95);   
    ptr->show();

    return 0;
}
