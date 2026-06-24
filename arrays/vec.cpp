#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec1={1,2,3,4,5};
    cout<<vec1[3]<<endl;
    cout<<vec1.at(3)<<endl;
    for(int i:vec1){
        cout<<i<<endl;
    }
    vec1.pop_back();
    for(int i:vec1){
        cout<<i<<endl;
    }
    cout<<vec1.size()<<endl;
    vec1.clear();

}