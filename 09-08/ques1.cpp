//  .write a program  to create a  class  student having name , roll number and subject mark as its member.
//  Initialize the details of two students at the time of creation where the name and subject marks are 
//  decided at the time of creation. Deallocate the memory by creating user defined destructor. 

#include <iostream>
using namespace std;
class student{
    char *name;
    int roll;
    int *marks;
    public:
        student(int m,int n){
            name = new char[m];
            cout<<"Enter the name : ";
            cin>>name;
            marks=new int[n];
            cout<<"Enter the marks : ";
            for(int i=0;i<n;i++){
                cin>>*(marks+i);
            }

        }
        student(int k,int m,int n){
            name = new char[m];
            cout<<"Enter the name : ";
            cin>>name;
            cout<<"Enter the marks : ";
            marks=new int[n];
            for(int i=0;i<n;i++){
                cin>>*(marks+i);
            }
           
        }
        void get(){
            cout<<"Enter the roll number : ";
            cin>>roll;
        }
        void show(int n){
            cout<<"Name : "<<name<<endl<<"Roll No : "<<roll<<endl;
            cout<<"Marks : ";
            for(int i=0;i<n;i++){
                cout<<*(marks+i)<<" ";
            }
            cout<<endl;
        }
    
    ~student(){cout<<"Destructed ";}
};

int main(){
    int a,b,c,d;
    cout<<"Enter the name length of first student and number of subjects : ";
    cin>>a>>b;
    student s1(a,b);
    s1.get();
    cout<<"Enter the name length of second student and number of subjects : ";
    cin>>c>>d;
    student s2(1,c,d);
    s2.get();

    cout<<endl;
    s1.show(b);
    cout<<endl;
    s2.show(d);
    
    return 0;
}