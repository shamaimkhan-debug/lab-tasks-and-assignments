#include<iostream>
using namespace std;
int main(){
    // take a number from a user as a input
    int number;
    cout<<"enter your number"<<endl;
    cin>>number;
    int reverseNumber=0;
    int sumOfNumber=0;
    // use  a while loop to extract digits 
    while(number>0){
        int digit=number%10;
        reverseNumber=reverseNumber*10+digit;
        sumOfNumber+=digit;
        number/=10;
    }
    // display the reverse number and sum of number
    cout<<"your reverse number is="<<reverseNumber<<endl;
    cout<<"your sum of the number is="<<sumOfNumber<<endl;
    return 0;
}