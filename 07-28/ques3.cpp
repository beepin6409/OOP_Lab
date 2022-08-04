//  Write a program to allocate n memory locations dynamically to store integers. 
// Input the values and find the sum and average of the numbers.int

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int *a=(int* )malloc(n*sizeof(n));
    int sum=0;
    float avg;
    for(int i=0;i<n;i++){
        cin>>*(a+i);
        sum+=*(a+i);
    }
    cout<<"Sum : "<<sum<<endl;
    avg=sum*1.0/n;
    cout<<"Avg : "<<avg<<endl;






    return 0;
}


