#include<iostream>
using namespace std;
int main() {
    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15;
    int sum1,sub2,multiply3,add4;
    cout<<"15 numbers"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    cin>>num6;
    cin>>num7;
    cin>>num8;
    cin>>num9;
    cin>>num10;
    cin>>num11;
    cin>>num12;
    cin>>num13;
    cin>>num14;
    cin>>num15;
    sum1=num1+num2+num3+num4+num5;
    sub2=num6-num7-num8-num9-num10;
    multiply3=num11*num12*num13*num14*num15;
    add4=sum1+sub2;
    sub2=multiply3-sum1;
    cout<<"result is="<<sub2<<endl;
    return 0;
}