// correct code for problem1

#include <iostream>

using namespace std;

class Class {
public:
    int Num;
    string String;
};

int main() {
   Class Obj;
   Obj.Num = 15;
    Obj.String = "Some text";

    cout << Obj.Num << "\n";
    cout << Obj.String << "\n";

    return 0;
