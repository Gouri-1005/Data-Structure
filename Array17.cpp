//Majority element (>n/2 times)
#include <iostream>
using namespace std;

int main() {
  int arr[] = {2, 2, 3, 3, 1, 2, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  int majorityElement = arr[0];
  int count = 1;

  for (int i = 1; i < n; i++) {
    if (arr[i] == majorityElement) {
      count++;
    } else {
      count--;
      if (count == 0) {
        majorityElement = arr[i];
        count = 1;
      }
    }
  }
  count = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == majorityElement) {
      count++;
    }
  }

  if (count > n / 2) {
    cout << majorityElement << " is the majority element." << endl;
  } else {
    cout << "There is no majority element." << endl; 
  }

  return 0;
}
