// Write a program to create a structure that stores the name,roll and 3 subject 
// marks of a student. Input the details of a student and display all the details 
// along with average mark by calling a user defined function where the structure variable is passed as an argument.

#include <iostream>
using namespace std;
struct student{
    char name[20];
    int roll;
    int marks[3];
    float avg_marks;
    void get(){
        cout<<"Enter the name of the student : ";
        cin>>name;
        cout<<"Enter the roll of the student : ";
        cin>>roll;
        int sum=0;
        cout<<"Enter three marks of the student: ";
        for(int i=0;i<3;i++){
            cin>>marks[i];
            sum+=marks[i];

        }
        avg_marks=sum/3.0;
    }
    void show(){
        cout<<"Name of the student is : "<<name<<endl;
        cout<<"Roll no of the student is : "<<roll<<endl;
        cout<<"Marks secured by the student are : ";
        for(int i=0;i<3;i++){
            cout<<marks[i]<<" ";

        }
        cout<<"\n average marks is : "<<avg_marks;

    }
};

int main(){
    struct student s1;
    s1.get();
    cout<<"\n\n\n";
    s1.show();
    return 0;
}