// Write a program in C++ that uses the reference variable concept and demonstrate the function
// pass by reference method

#include <iostream>
using namespace std;
void refvar(int &k){
    k++;
}

int main(){
    int a=25;
    refvar(a);
    cout<<a;
    return 0;

}