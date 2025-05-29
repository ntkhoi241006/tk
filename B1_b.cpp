#include <iostream>
using namespace std;

void tangdan(int* start, int* end) {
    for (int* i = start; i < end - 1; i++) {
        for (int* j = start; j < end - (i - start) - 1; j++) {
            if (*j > *(j + 1)) {
                int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}

void giamdan(int* start, int* end) {
    for (int* i = start; i < end - 1; i++) {
        for (int* j = start; j < end - (i - start) - 1; j++) {
            if (*j < *(j + 1)) {
                int temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
            }
        }
    }
}

void sortHalfArray(int* A, int n) {
    int mid = n / 2;

    tangdan(A, A + mid);

    if (n % 2 == 0) {
        giamdan(A + mid, A + n); 
    } else {
        giamdan(A + mid + 1, A + n);
    }
}

int main() {
    int n;

    cout << "Nhap so phan tu cua day A: "; cin >> n;
    int A[n];

    cout << "Nhap cac phan tu cua day A:\n";
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "] = ";
        cin >> *(A + i); 
    }

    sortHalfArray(A, n);

    cout << "Dãy A sau khi sắp xếp:\n";
    for (int i = 0; i < n; i++) {
        cout << *(A + i) << " "; 
    }
    cout << endl;

    return 0;
}