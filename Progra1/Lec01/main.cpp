#include <iostream>

using namespace std;

typedef unsigned long long lli;

lli fibo(int pos);

int main() {
    lli res = 0, last = 0;
    for (int i = 1; i <= 1000; i++) {
        last = fibo(i);
        if (res >= last && last > 0 && last > 1) {
            break;
        } else {
            res = last;
        }
    }
    cout << "Final result is " << res << endl;
    return 0;
}

lli fibo(int pos) {
    if (pos <= 1) {
        return 0;
    }
    lli arr[] = {0, 1, 1};
    int less = pos - 1;
    if (sizeof(arr) / sizeof(*arr) > less) {
        return arr[less];
    }
    int c = 4;
    lli t = 0, t2 = 0;
    while (c <= pos) {
        t = arr[1];
        t2 = arr[1] + arr[2];
        if (t2 > 0 && t2 > arr[2]) {
            arr[0] = arr[1] + arr[2];
            arr[1] = arr[2];
            arr[2] = arr[0];
            arr[0] = t;
            c++;
        } else {
            c = pos + 1;
        }
    }
    return arr[2];
}