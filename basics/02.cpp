#include <iostream>
using namespace std;

void doublethenumber(int &a){
    a*=2;
    cout<<"inside the function:"<<a<<endl;
}
int main(){
    int a=10;
    doublethenumber(a);
    cout<<"outsidde the function"<<a;
}