#include<iostream>
#include<string>
using namespace std;

int main() {
    int ar[] = {64, 34, 25, 5, 22, 11, 90, 12};
    int size = sizeof(ar) / sizeof(ar[0]);

    for (int i = 0; i < size-1; i++) {
        int mi = i;
        for (int j = i+1; j < size; j++) {
            if (ar[j] < ar[mi]) {
                mi = j;
            }
        }
        int minval = ar[mi];
        for (int k = mi; k > i; k--) {
            ar[k] = ar[k-1];
        }
        ar[i] = minval;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;

    return 0;
}

