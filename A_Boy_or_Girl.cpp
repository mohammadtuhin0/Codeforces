#include <iostream>
#include <string>
#include<set>
using namespace std;
int main() {
    string name;
    cin>> name;

    set<char> userSet;
    for(int i=0; i<name.size(); i++) {
        userSet.insert(name[i]);
    }
    if(userSet.size() % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    } else {
        cout<<"IGNORE HIM!"<< endl;
    }
}