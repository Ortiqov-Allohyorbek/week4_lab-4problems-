#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"write your number"<<endl;
    cin>>a;
    if (a==6 || a==28 || a==496 || a==8128 || a==33550336)
        cout<<"true"<<endl;
    else
        cout<<"false";
    return 0;
}