#include <iostream>
using namespace std;

class test {
    int a, b;

public:
    test(int x = 0, int y = 0) {
        a = x;
        b = y;
    }

    void show() {
        cout << "a: " << a << " b: " << b << endl;
    }

    friend void operator+(test &ob1, test &ob2);
};

void operator+(test &ob1, test &ob2) {
    ob1.a += ob2.a; // সরাসরি ob1 পরিবর্তন করছে
    ob1.b += ob2.b; // সরাসরি ob1 পরিবর্তন করছে
}

int main() {
    test obj1(12, 34), obj2(34, 6), obj3;
    obj1 + obj2; // obj1 সরাসরি পরিবর্তন হচ্ছে
    obj1.show(); // পরিবর্তিত obj1 প্রদর্শন করবে
    return 0;
}