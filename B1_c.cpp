#include <iostream>
#include <cmath>
using namespace std;

void findlocmax(int A[], int n, int &pos1, int &pos2, int &maxDiff) {
    maxDiff = 0;
    pos1 = pos2 = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int diff = abs(A[i] - A[j]);
            if (diff > maxDiff) {
                maxDiff = diff;
                pos1 = i;
                pos2 = j;
            }
        }
    }
}
int main() {
    int n;
    cout << "Nhap so luong phan tu cua day A: "; cin >> n;
    int A[n]; 
    cout << "Nhap cac phan tu cua day A:\n";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    int loc1, loc2, locmax;
    findlocmax(A, n, loc1, loc2, locmax);
    cout << "Khoang cach gia tri lon nhat la: " << locmax << endl;
    cout << "Vi tri la: A[" << loc1 << "] = " << A[loc1]
         << " va A[" << loc2 << "] = " << A[loc2] << endl;
    return 0;
}
