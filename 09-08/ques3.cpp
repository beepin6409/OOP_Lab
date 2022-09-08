// write a program to create a user defined zero argument constructor  parametrized and copy constructor
// and verify that the memory get released in the reverse order of their allocation by using a user defined 
// destructor function.

#include <iostream>
using namespace std;

class check{
    string verify;
    public:
        check(){
            verify="It is zero Argument ";
        }
        check(int k){
            verify="It is parameterised  ";

        }
        check(check &k){
            verify="It is Copy";

        }

    ~check(){
        cout<<endl<<verify<<" Got Destructed "<<endl;;
    }
};

int main(){
    check c1;
    check c2(1);
    check c3(c2);
}