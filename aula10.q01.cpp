#include <iostream>

using namespace std;

int mdc(int x, int y);

int main() {
    int a, b, x=0;

    cin >> a >> b;

    if (a>b && b!=0) {
        x = mdc(a, b);
        cout << x;
    } else {
        cout << " ";
    }
}

int mdc(int x, int y) {
    if (y==0) {
        return x;
    } else {
        return mdc(y, x%y);
    }
}
