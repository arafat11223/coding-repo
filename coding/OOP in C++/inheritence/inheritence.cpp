#include <iostream>
using namespace std;
class parent
{
public:
    int x;

protected:
    int y;

private:
    int y;
};
class child: public parent
{
    //x will renmain public
    //y will remain protected
    //z will not be accessible

};

 
class child2: private parent
{
    //x will renmain private
    //y will remain protected
    //z will not be accessible

};
class child3: protected parent
{
    //x will remain public
    //y will remain protected
    //z will not be accessible

};
int main()
{
}