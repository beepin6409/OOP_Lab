// Write a program in C++ to create overloaded function area to compute area of circle,
// rectangle  and square.

#include <iostream>
using namespace std;
void area(float i){
    cout<<"Area of circle is "<<3.141*i*i<<endl;

}
void area(float i,float j){
    cout<<"Area of rectangle is "<<i*j<<endl;

}
void area(char c,float i){
    cout<<"Area of square is "<<i*i<<endl;

}


int main(){
    float r_circle=2.13;
    float l_rect=3.5;
    float b_rect=4;
    float l_squ=5.5;
    area(r_circle);
    area(l_rect,b_rect);
    // if you want to calculate  area of square, provide one character argument at first 
    // to overcome function overloading.
    area('s',l_squ);
    return 0;    
}