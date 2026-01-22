#include <bits/stdc++.h>
using namespace std;

void swapNumbers(int *a, int *b) {

    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x;
    cin >> x;

    int y;
    cin >> y;

    cout << "Before swap:";
    cout << x << " " << y;

    swapNumbers(&x, &y);
    cout << endl;

    cout << "After swap: ";
    cout << x << " " << y;

    return 0;
}
