#include<iostream>
using namespace std;
int main() {
    string name;
    cout<<"shamaim khan";
    cin>>name;
    string address;
    cout<<"johar town"<<endl;
    cin>>address;
    int marks;
    cout<<"995"<<endl;
    cin>>marks;
    string email;
    cout<<"123@gmail.com"<<endl;
    cin>>email;
   cout<< "criteria for admission"<<endl;
   cout<<"CS>60"<<endl;
   cout<<"SLP>50"<<endl;
   float average;
   cout<<"student average"<<endl;
   cin>>average;
   int seats;
   cout<<"seats available"<<endl;
   cin>>seats;
   cout<<"preference1"<<endl;
   if(average>60){
    cout<<"you are eligible for admission in CS"<<endl;
   }
   else{
    cout<<"you are not eligible for admission in CS"<<endl;
   }
   cout<<"preference2"<<endl;
   if(average>50){
    cout<<"you are eligible for admission in SLP"<<endl;
   }
   cout<<"seats available"<<endl;
   if(seats>0){
    cout<<"admission given"<<endl;
   }
   else{
    cout<<"admission not given"<<endl;
   }
return 0;
}