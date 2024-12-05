#include<iostream>
using namespace std;

class test {
    int a, b;
public:
    // কনস্ট্রাক্টর
    test(int x = 0, int y = 0) {
        a = x;
        b = y;
    }

    // মান প্রদর্শনের জন্য ফাংশন
    void show() {
        cout << "a: " << a << " b: " << b << endl;
    }

    // ফ্রেন্ড ফাংশন: শুধুমাত্র একটি আর্গুমেন্ট নেয়
    friend test operator +(test &ob1, test &ob2);
    friend test operator +(test &ob1); // একক আর্গুমেন্ট নেওয়া ফাংশন
};

// আগের মতো দুইটি অবজেক্ট যোগ করার ফ্রেন্ড ফাংশন
test operator +(test &ob1, test &ob2) {
    test t;
    t.a = ob1.a + ob2.a;
    t.b = ob1.b + ob2.b;
    return t;
}

// নতুন ফ্রেন্ড ফাংশন: একক অবজেক্ট যোগ করে
test operator +(test &ob1) {
    test t;
    t.a = ob1.a + 10; // একটি ধ্রুবক যোগ করা হয়েছে
    t.b = ob1.b + 10; // একটি ধ্রুবক যোগ করা হয়েছে
    return t;
}