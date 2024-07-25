#include <iostream>
#include <stack>
using namespace std;


int main(){

string a;
cout<<"enter kro: ";
getline(cin, a);
stack<char> st;

for(int i=0;i<a.size();i++){
    char c=a[i];
    st.push(c);
    }


cout<<"answer is : ";
while(!st.empty()){
    char ans=st.top();
    st.pop();
    cout<<ans;
}



}
