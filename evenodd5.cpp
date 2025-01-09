#include<iostream>
using namespace std;
int main() {
   //inputting number
    int n;
    cout<<"enter your number"<<endl;
    cin>>n;
    //checking of even and odd
    string result=(n%2==1)? "this numer is even": "this number is odd";
        cout<<result<<endl;
        return 0;
    }
 