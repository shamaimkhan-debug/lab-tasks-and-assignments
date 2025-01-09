#include<iostream>
using namespace std;
int main() {
    int age;
    int monthlyincome;
    int loanamountrequested;
    bool isexistingloan;
    cout<<"individual age"<<endl;
    cin>>age;
    cout<<"individual monthly income"<<endl;
    cin>>monthlyincome;
    cout<<"loan amount requested"<<endl;
    cin>>loanamountrequested;
    cout<<"loan="<<isexistingloan;
    cin>>isexistingloan;
    if(age>21 && age<60){
        cout<<"eligible for loan"<<endl;
    }
    else{
        cout<<"not eligible for loan"<<endl;
    }
    if(individual monthly income>40,000){
        cout<<"eligible for loan amount 500,000"<<endl;
    }
    else{
        cout<<"not eligible for loan"
    }
    if(individual monthly income>25,000){
        cout<<"eligible for loan amount below 500,000"<<endl;
    }
}