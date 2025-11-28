#include <iostream>
using namespace std;

class Print {
public:
    void display(int i) {
        cout << "Integer: " << i << endl;
    }

    void display(double d) {
        cout << "Double: " << d << endl;
    }

    void display(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Print obj;
    obj.display(10);           // Calls int version
    obj.display(3.14);         // Calls double version
    obj.display("Hello");      // Calls string version
    return 0;
}
