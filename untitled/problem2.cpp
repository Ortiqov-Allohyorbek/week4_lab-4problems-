#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"type 3 numbers"<<endl;
    cin>>a>>b>>c;
    if (a>b && b>c){
        cout<<b;
    }else if (b>c && c>a) {
        cout<<c;
    }else
        cout<<b;
return 0;
}