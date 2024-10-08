//Longest Consecutive sequence in an array
#include <iostream>
using namespace std;

int main()
{
    int a[] = {100, 200, 1, 2, 3, 4};
    int n = sizeof(a) / sizeof(a[0]);
    int longest = 1;
 
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int cnt = 1;
        for (int j = 0; j < n; j++) {
            if (a[j] == x + 1) {
                x += 1;
                cnt += 1;
            }
        }

        longest = max(longest, cnt);
    }
    cout << "The longest consecutive sequence is " << longest << "\n";
    return 0;
}
