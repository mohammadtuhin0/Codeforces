#include <iostream>
using namespace std;
int main() {
    int l, b;
    int cnt =0;
    cin>>l >> b;

    while(l<=b) {
        l = l*3;
        b = b*2;
        cnt++;
    }
    cout<<cnt<<endl;
}