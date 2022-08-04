// In the student structure mentioned in question 1 input the details of two students.Write a user defined
// function that compares between the two students and returns the details of that student who has scored the
// higher average mark. Display all the details that student after receiving the return value.

#include <iostream>
using namespace std;
struct student{
    char name[20];
    int roll;
    int marks[3];
    float avg_marks;
    void get(){
        cout<<"\nEnter the name of the student : ";
        cin>>name;
        cout<<"\nEnter the roll of the student : ";
        cin>>roll;
        int sum=0;
        cout<<"\nEnter three marks of the student: ";
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
        cout<<"\naverage marks is : "<<avg_marks;

    }
};

int main(){
    struct student s[2];
    s[0].get();
    s[1].get();
    cout<<"\n\n\n\n";
    cout<<"The student who have got the highest score is : "<<endl;
    if(s[0].avg_marks>s[1].avg_marks){
        s[0].show();
    }
    else if(s[0].avg_marks==s[1].avg_marks){
        cout<<"Both have got same score";
    }
    else{
        s[1].show();
    }
    return 0;
}