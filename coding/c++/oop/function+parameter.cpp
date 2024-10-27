#include<iostream>
using namespace std;
class car
{
    public:
    int speed (int maxspeed);
};
int car::speed(int maxspeed)
{
    return maxspeed;

}
int main()
{
    car obj;
    cout<<obj.speed(200);


}