// Write  a program in C++ to justify the use of default arguments that computes the
// simple interest with default rate of interest as 8.5%.

#include <iostream>
using namespace std;
void simp_int(float p,float t,float r=8.5){
    float ans;
    ans=(p*t*r)/100;
    cout<<"\n\nThe simple interest is "<<ans;
}

int main(){
    float p;
    float t,r;
    cout<<"Enter the principle amount : ";
    cin>>p;
    cout<<"Enter the time : ";
    cin>>t;
    simp_int(p,t);
    return 0;


}