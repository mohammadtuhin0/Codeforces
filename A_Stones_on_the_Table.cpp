#include <iostream>
using namespace std;
int main() {
    int n, cnt =0;
    cin >> n;
    string stoneColour;
    cin>>stoneColour;

    for(int i=0; i<n-1; i++) {
        if(stoneColour[i] == stoneColour[i+1]){
            cnt++;
        }
    }
    cout<<cnt << endl;
}