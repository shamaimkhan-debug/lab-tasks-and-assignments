#include<iostream>
using namespace std;
int main() {
    float Vi, acceleration, time,Vf;
    cout<<"Vi of car"<<endl;
    cin>>Vi;
    cout<<"time taken by car"<<endl;
    cin>>time;
    cout<<"acceleration of car"<<endl;
    cin>>acceleration;
Vf=Vi+acceleration*time;
cout<<"Vf of car"<<endl;
return 0;
}