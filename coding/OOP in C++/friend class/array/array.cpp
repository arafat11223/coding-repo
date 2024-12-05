#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice();
    void displayprice();
};
void shop ::setprice()
{
    cout << "enter id of your item no: " << counter + 1 << " ";
    cin >> itemid[counter];
    cout << "enter price of your item:";
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id : " << itemid[i] << " is :" << itemprice[i] << "tk" << endl;
    }
}
int main()
{
    shop dokan;
    dokan.initcounter();
    dokan.setprice();
    dokan.setprice();
    dokan.setprice();
    dokan.displayprice();
}