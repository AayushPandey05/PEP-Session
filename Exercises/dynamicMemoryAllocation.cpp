#include <bits/stdc++.h>
using namespace std;

void swapNumbers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int *x = new int(10);
    int *y = new int(20);

    cout << "Before swap: ";
    cout << *x << " " << *y << endl;

    swapNumbers(x, y);

    cout << "After swap: ";
    cout << *x << " " << *y << endl;

    delete x;
    delete y;

    return 0;
}
