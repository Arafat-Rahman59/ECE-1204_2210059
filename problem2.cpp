//correct code for problem2
#include <iostream>
#include <string>
using namespace std;

class Class {
private:
    int a;
    int b;

public:
    void setA(int val) { a = val; }
    void setB(int val) { b = val; }
    int getA() { return a; }
    int getB() { return b; }
};

int main() {
    Class Obj;
    Obj.setA(25);
    Obj.setB(50);

    cout << Obj.getA() << "\n";
    cout << Obj.getB() << "\n";

    return 0;
}
