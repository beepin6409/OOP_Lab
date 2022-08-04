#include <iostream>
using namespace std;
class student
{
    int roll;
    float avg;
    static int k; //static data member
    public:
    void get()
    {
        cout<<"enter the roll average ";
        cin>>roll>>avg;
        k = k+1;
    }
    void show()
    {
        cout<<"roll = "<<roll<<" Average mark = "<<avg<<" k = "<<k<<endl;
    }
};
int student::k;//static data member defined here..initial default value is zero

int main()
{
   student s1,s2;  
   s1.get();
   s2.get();
   s1.show();
   s2.show();

    return 0;
}

