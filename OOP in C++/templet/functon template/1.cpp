#include<iostream>
using namespace std;
//template<class t>//same
template<typename t>
t add(t a,t b)
{
    //cout<<a+b<<endl; // eita kora jbe
    return a+b;
}
template<class t>
void subtraction(t a,t b)
{
    cout<<"subtraction :"<<a-b<<endl;
}
template<class s>
int multiplication(s a,s b)
{
    return a+b;
}   
template<class str>
str strconcation(str a, str b)
{
    return a+b;
}


int main()
{
    // ---return type typename----
    cout<<"addition: "<<add<int>(5,6)<<endl;
    cout<<"addition: "<<add<float>(5.6,6.8)<<endl;
    //---return type void---
    subtraction<int>(3,9);
    subtraction<float>(9.6,4.8);
    //---return type int---
    cout<<"multiplication: "<<multiplication<int>(10,7)<<endl;
    
    //---string---
    cout<<"String Concatenation: "<<strconcation<string>("hello ","coder");

}
