// Write a pogram to add one static and one non static data member to user defined class and
// access them by static and non static member functions respectively.

#include <iostream>
using namespace std;
class abc{
    int a;
    static int k;
    public:
    void get(){
        cout<<"Enter the value of a "<<endl;
        cin>>a;
    }
    static void input(){
        cout<<"Enter the value of k ";
        cin>>k;
    }
    void add(){
        cout<<"The sum is "<<a+k;
    }
    void show(){
        cout<<"A is "<<a<<endl;
    }
    static void display(){
        cout<<"K is "<<k<<endl;
    }
};
int abc:: k;

int main(){
    abc x;
    x.get();
    abc::input();
    x.show();
    abc::display();
    x.add();



}