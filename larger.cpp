#include<iostream>
using namespace std;
int main () {
int num1, num2;
cout<<"enter number 1"<<endl;
cin>>num1;
cout<<"enter number 2"<<endl;
cin>>num2;
if(num1>num2){
    cout<<"the larger number is= "<<endl;
}
else if(num2>num1){
    cout<<"the larger number is= "<<endl;
}
else{
    cout<<"both numbers are equal"<<endl;
}
return 0;
}