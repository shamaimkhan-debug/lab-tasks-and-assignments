#include<iostream>
using namespace std;
int main() {
    //triangle type
    int sideA,sideB,sideC;
    cout<<"enter side A"<<endl;
    cin>>sideA;
    cout<<"enter side B"<<endl;
    cin>>sideB;
    cout<<"enter side C"<<endl;
    cin>>sideC;
    if(sideA==sideB && sideB==sideC && sideC==sideA ){
        cout<<"the triangle is equilateral"<<endl;
    }
    else{
        cout<<"the triangle is not equilateral"<<endl;
    }
    if(sideA==sideB && sideB==sideC && sideC!=sideA){
        cout<<"the triangle is is isosceles"<<endl;
    }
    else{
        cout<<"the triangle is not isosceles"<<endl;
    }
    if(sideA!=sideB && sideB!=sideC && sideC!=sideA){
        cout<<"the triangle is scalene"<<endl;
    }
    else{
        cout<<"the triangle is not scalene"<<endl;
    }

    if(sideA+sideB>sideC || sideA+sideC>sideB || sideB+sideC>sideA ){
        cout<<"the triangle is not valid"<<endl;
    }
    else{
        cout<<"the triangle is valid"<<endl;
    }
    


    return 0;
}