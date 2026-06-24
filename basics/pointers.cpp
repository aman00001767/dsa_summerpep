#include <iostream>
using namespace std;

int main(){
    //pointers hold addresses
    int a=10;
    int *b=&a;    //always initialize the pointer
    // int *ptr=a;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<b+1<<endl;
    cout<<*(b+1)<<endl;
    cout<<*b+1<<endl;
}