// C++-এ Virtual Base Class একটি বিশেষ ব্যবস্থা, যা ডায়মন্ড প্রবলেম সমাধানের জন্য ব্যবহৃত হয়। ডায়মন্ড প্রবলেম হয় যখন একটি 
//ক্লাস দুটি আলাদা ক্লাস থেকে ইনহেরিট করে, যেগুলো আবার একটি সাধারণ বেস ক্লাস থেকে ইনহেরিট করে। এই সমস্যায় একই বেস 
//ক্লাসের ডেটা মেম্বার এবং মেম্বার ফাংশনের একাধিক কপি তৈরি হয়, যা বিভ্রান্তি এবং অনাকাঙ্ক্ষিত আচরণ সৃষ্টি করে।

// Virtual Base Class ব্যবহার করলে বেস ক্লাসের একমাত্র একটি কপি ডেরাইভড ক্লাসে অন্তর্ভুক্ত হয়, যা এই সমস্যার সমাধান করে।
#include<iostream>
using namespace std;

class base
{
    public:
    int d=2;
};

class base_1:virtual public base
{
    protected:
    int a;
    public:
    base_1(int i)
    {
        a=i;
    }
    

};
class base_2:virtual public base
{
    protected:
    int b ;
    public:
    base_2(int j)
    {
        b=j;
    }
    

};
class derive: public base_1, public base_2
{
    int c;
    public:
    derive(int i,int j,int k):base_1(i),base_2(j)
    {
        c=k;
    }
    int get_abcd()
    {
        return a*b*c*d;
    }
    
};
int main()
{
    derive ob(10,20,30);
    cout<<ob.get_abcd();
}