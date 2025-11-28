#include <iostream>
using namespace std;

class Student {
private:
    string name;     // private: only accessible inside the class

protected:
    int rollNo;      // protected: accessible in child classes

public:
    int age;         // public: accessible from anywhere

    // Function to set name and rollNo (since they're not directly accessible)
    void setDetails(string n, int r) {
        name = n;
        rollNo = r;
    }

    // Function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1;

    // Direct access not allowed for private or protected members
    // s1.name = "Rahul";     ? ERROR (private)
    // s1.rollNo = 101;       ? ERROR (protected)

    s1.age = 20;              // ? Allowed (public)

    // Set private and protected data using public function
    s1.setDetails("Rahul", 101);

    // Display all details using public function
    s1.displayDetails();

    return 0;
}

