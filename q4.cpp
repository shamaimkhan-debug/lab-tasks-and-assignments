#include<iostream>
using namespace std;
int main(){
    int MA1;
    int MA2;
    int MA3;
    cout<<"enter your value for a"<<endl;
    cin>>MA1;
    cout<<"enter your value for b"<<endl;
    cin>>MA2;
    cout<<"enter your value for c"<<endl;
    cin>>MA3;
    int result;
    result=(MA1*(MA2+MA3))+(MA1+MA3);
    cout<<"the reult is (a*(b+c))+(c*(a+C))"<<result<<endl;
    return 0;
}