// Find the union
#include <iostream>
#include <set>
using namespace std;
int main() {
    int arr1[] = {2, 2, 3, 4, 5};
    int arr2[] = {1, 5, 6, 7, 8};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    set<int> unionSet;

    for (int i = 0; i < m; i++) {
        unionSet.insert(arr1[i]);
    }
    for (int i = 0; i < n; i++) {
        unionSet.insert(arr2[i]);
    }

    cout << "Union of two arrays is: ";
    for (int elem : unionSet) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}