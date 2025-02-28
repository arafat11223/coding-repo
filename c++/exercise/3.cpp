#include<iostream>
#include<string >
using namespace std;
class bankaccount
{
    int balance;
    public:
    bankaccount(int inbal)
    {
        balance=inbal;

    }
    friend void changebalance(bankaccount &o);
    void display()
    {
        cout<<balance<<endl;
    }


};
void changebalance(bankaccout &o)
{
    o.balance=60;
    return o.balance;

}
int main()
{
    bankaccount ob(20);
    changebalance(ob);
}