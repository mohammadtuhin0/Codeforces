#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for(int i = 1; i <= a; i++) {

        for(int j = 0; j < b; j++) {

            if(i % 2 == 1) {
                // odd rows → full row of '#'
                cout << "#";
            }
            else if(i % 4 == 2) {
                // row 2, 6, 10 → last column '#'
                if(j == b - 1) cout << "#";
                else cout << ".";
            }
            else {
                // row 4, 8, 12 → first column '#'
                if(j == 0) cout << "#";
                else cout << ".";
            }
        }
        cout << endl;
    }

    return 0;
}
