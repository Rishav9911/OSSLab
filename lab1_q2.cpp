#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"size: ";
    cin>>n;
int arr[n];

cout<<"enter elements: ";
for(int i=0;i<n;i++){
    cin>>arr[i];
}

float sum=0;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
}

float avg=sum/n;

cout<<"ans: "<<avg;

}
