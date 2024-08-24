//Sort an array of 0's, i's and 2's
#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count0 = 0, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count0++;
        } else if (arr[i] == 1) {
            count1++;
        } else {
            count2++;
        }
    }

    for (int i = 0; i < count0; i++) {
        arr[i] = 0;
    }
    for (int i = count0; i < count0 + count1; i++) {
        arr[i] = 1;
    }
    for (int i = count0 + count1; i < n; i++) {
        arr[i] = 2;
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}