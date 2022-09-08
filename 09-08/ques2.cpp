// write  a program to create a class employee having employee name, department name, id , monthly salary 
// as its member. Initialize the details by accepting input from keyboard and user defined parametrized 
// constructor function. Create a user defined copy constructor to copy the properties of one instance to 
// another and display the details by calling a friend function.

#include <iostream>
using namespace std;

class employee{
    string name;
    string dep_name;
    int id;
    int month_salary;
    public:
        employee(string a,string b,int c,int d){
            name=a;
            dep_name=b;
            id=c;
            month_salary=d;
        }
        employee(employee &k){
            name=k.name;
            dep_name=k.dep_name;
            id=k.id;
            month_salary=k.month_salary;
        }
    friend void display(employee a){
        cout<<"Name : "<<a.name<<endl;
        cout<<"Dep Name : "<<a.dep_name<<endl;
        cout<<"ID : "<<a.id<<endl;
        cout<<"Monthly Salary : "<<a.month_salary<<endl;
    }
};

int main(){
    employee e1("Bipin","MK",12345,50000);
    employee e2(e1);
    display(e2);

}