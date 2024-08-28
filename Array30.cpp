// Majority Element (n/3 times) 
#include <iostream>
using namespace std;

void printMajorityElements(int arr[], int n) {
    int candidate1 = -1, candidate2 = -1, count1 = 0, count2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate1)
            count1++;
        else if (arr[i] == candidate2)
            count2++;
        else if (count1 == 0) {
            candidate1 = arr[i];
            count1 = 1;
        } else if (count2 == 0) {
            candidate2 = arr[i];
            count2 = 1;
        } else {
            count1--;
            count2--;
        }
    }

    count1 = count2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate1)
            count1++;
        else if (arr[i] == candidate2)
            count2++;
    }

    if (count1 > n / 3)
        cout << candidate1 << " ";
    if (count2 > n / 3)
        cout << candidate2 << " ";
    cout << "\n";
}

int main()
{
    int arr[] = {11, 33, 33, 11, 33, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The majority elements are: ";
    printMajorityElements(arr, n);
    return 0;
}
