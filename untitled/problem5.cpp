#include <iostream>
using namespace std;
int main(){
    int x1,y1,x2,y2,x3,y3;
    cout<< "your 3 coordinates";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if ((x2-x1)*(y3-y1)==(y2-y1)*(x3-x1)) {
        cout<<"false"<<endl;
    }else {
        cout<<"true"<<endl;
    }
    return 0;
}