//WAP to create a class student having the details of the student like name roll number
// age and 4 subjects marks INput the details for 2 students using necessary member function and display
// by calling friend function 
// Use the concepts of array of objects to initialize of objects and display 

//  Return the details of that student to another who is having higher average marks using 
// i. member function 
// ii. friend function
#include <iostream>
using namespace std;
class student{
    int roll;
    int age;
    int marks[4];
    float average;
    public:
        void get(){
            cout<<"Enter Roll and Age : ";
            cin>>roll>>age;
            cout<<"Enter the marks of 4 subjects : ";
            for(int i=0;i<4;i++){
                cin>>marks[i];
            }
        }
        student low_high(student i,student j){
            student k;
            if(i.average<j.average){
                k.roll=i.roll;
                k.age=i.age;
                for(int a=0;a<4;a++){
                    k.marks[a]=i.marks[a];
                }
            }
            else{
                k.roll=j.roll;
                k.age=j.age;
                for(int a=0;a<4;a++){
                    k.marks[a]=j.marks[a];
                }

            }
            return k;
        }
     friend void display(student);
     friend student change(student ,student);
};
void display(student k ){
     int sum=0;
     cout<<"Roll : "<<k.roll<<endl<<"Age : "<<k.age<<endl;
     cout<<"Marks in 4 subjects are : ";
     for(int i=0;i<4;i++){
        cout<<k.marks[i]<<" ";
        sum+=k.marks[i];

    }
    k.average=(sum*1.0)/4;
    cout<<"\nAverage Marks is "<<k.average;
}

student change(student i,student j){
     student k;
            if(i.average<j.average){
                k.roll=i.roll;
                k.age=i.age;
                for(int a=0;a<4;a++){
                    k.marks[a]=i.marks[a];
                }
            }
            else{
                k.roll=j.roll;
                k.age=j.age;
                for(int a=0;a<4;a++){
                    k.marks[a]=j.marks[a];
                }

            }
            return k;

}


int main(){
    student s[2];
    s[0].get();
    s[1].get();
    cout<<"Details of 1st student : \n";
    display(s[0]);
    cout<<"\n\nDetails of 2nd student : \n";
    display(s[1]);


    student m ;
    m=s[1].low_high(s[0],s[1]);
    cout<<"\n\nPrinting using member function : "<<endl;
    display(m);


    student f;
    f=change(s[0],s[1]);
    cout<<"\n\n Printing using friend function : "<<endl;
    display(f);

    return 0;
}