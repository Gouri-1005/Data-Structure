// Remove duplicates from sorted array
#include <iostream>
using namespace std;

int main() {
    int num[] = {1, 2, 2, 3, 4, 4, 5}; 
    int n = sizeof(num) / sizeof(num[0]); 
    if (n == 0) {
        return 0; 
    }
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (num[i] != num[j]) { 
            j++;
            num[j] = num[i]; 
        }
    }
    for (int i = 0; i <= j; i++) {
        cout << num[i] << " ";
    }
    cout << endl;
    //return j;// + 1;
}
