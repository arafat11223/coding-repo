#include <iostream>
using namespace std;
template <class t>
class vector
{
public:
    t *arr;
    int size;
    vector(int s)
    {
        size = s;
        arr = new t[size];
    }
    t add(vector &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(4);
    v1.arr[0] = 8;
    v1.arr[1] = 3;
    v1.arr[2] = 7;
    v1.arr[3] = 2;
    vector<float> v2(4);
    v2.arr[0] = 8.5;
    v2.arr[1] = 3.9;
    v2.arr[2] = 7.4;
    v2.arr[3] = 2.5;
    float a = v1.add(v2);
    cout << a << endl;
}