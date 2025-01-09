#include<iostream>
using namespace std;
int main() {
    float bagsize,area,costperarea,costperpound,costofbag;
    int pound;
    cout<<"size of bag"<<endl;
    cin>>bagsize;
    cout<<"area covered by bag"<<endl;
    cin>>area;
    cout<<"cost of bag"<<endl;
    cin>>costofbag;
    costperarea=area*pound;
    costperpound=bagsize*pound;
    cout<<"costperarea"<<endl;
    cout<<"costperpound"<<endl;
    return 0;
}