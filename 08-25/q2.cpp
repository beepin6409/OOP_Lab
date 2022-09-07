// WAP to create the class employee having the name, age, id, department name and monthly salary
// Assign the values for two  employees and display them
// i. First employee details are input by the user from keyboard at the time of creation(NOTE:using constructor)
//  Second employee details are also input from the user by keyboard where the details are dynamically
//  initialized

#include <iostream>
using namespace std;
class employee
{
    string name;
    int age;
    int id;
    string dep_name;
    char dep;
    int month_salary;

public:
    employee(){
        cout << "\n\nName : ";
        cin>> name;
        cout << "\nAge : ";
        cin>> age;
        cout << "\nID : ";
        cin>> id;
        cout << "\nDepartment name : ";
        cin>> dep_name;
        cout << "\nMonthly salary : ";
        cin>> month_salary;

    }

    employee(string s ,int a,int i,string d,int sal);


    void show(){
        cout << "\n\nName : ";
        cout << name;
        cout << "\nAge : ";
        cout << age;
        cout << "\nID : ";
        cout << id;
        cout << "\nDepartment name : ";
        cout << dep_name;
        cout << "\nMonthly salary : ";
        cout << month_salary << endl;
    }
};

employee :: employee(string s, int a, int i, string d, int sal)
{
    name = s;
    age = a;
    id = i;
    dep_name = d;
    month_salary = sal;
}


int main()
{
    employee e1;
    string s,d;
    int a,i,ms;
    printf("Enter name , age,id,department name and monthyl salary : ");
    cin>>s>>a>>i>>d>>ms;
    employee e2(s,a,i,d,ms);



    e1.show();
    e2.show();

    return 0;
}