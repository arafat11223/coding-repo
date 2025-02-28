#include <iostream>
using namespace std;

class Vector2D {
private:
    int a, b;

public:
    // Constructor
    Vector2D(double x = 0, double y= 0) 
    {
        a=x;
        b=y;
    }

    
    void show()
    {
        cout<<"a = "<<a<<"b = "<<b<<endl;
    }
    Vector2D operator +(Vector2D obj)
    {
        Vector2D t(0,0);
        t.a=a+obj.a;
        t.b=b+obj.b;
        return t;
    }
    Vector2D operator -(Vector2D obj)
    {
        Vector2D t(0,0);
        t.a=a-obj.a;
        t.b=b-obj.b;
        return t;
    }
    Vector2D operator *(Vector2D obj)
    {
        Vector2D t(0,0);
        t.a=a*obj.a;
        t.b=obj.b*b;
        return t;
    }
    
};

int main() {
    Vector2D v1(3, 4);
    Vector2D v2(1, 2);

    // Vector addition
    Vector2D v3 = v1 + v2;
    v3.show();

    // Vector subtraction
    Vector2D v4 = v1 - v2;
    v4.show();

    // Scalar multiplication
    Vector2D v5 = v1 * 2;
    v5.show();

    

    return 0;
}
