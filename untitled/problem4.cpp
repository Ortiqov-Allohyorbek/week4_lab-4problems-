#include <iostream>
using namespace std;
int main(){
    long long num;
    int digit;
    cout<<"write numbers";
    cin>>num;
    if (num>9) {
        digit=num%9;
        cout<<digit<<endl;
    }else {
        cout<<num;
    }
    return 0;
}