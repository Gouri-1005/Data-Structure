// Next permutation
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 1, 5, 4, 3, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ind = -1; 
    for (int i = n - 2; i >= 0; i--)
     {
        if (arr[i] < arr[i + 1])
         {
            
            ind = i;
            break;
        }
    }
    if (ind == -1) 
    {
     for (int i = 0; i < n / 2; i++)
        {
            swap(arr[i], arr[n - i - 1]);
        }
        return 0;
    }
    int nextGreater = ind + 1; 
    for (int i = ind + 2; i < n; i++) 
    {
        if (arr[i] > arr[ind] && arr[i] < arr[nextGreater]) 
        {
            nextGreater = i;
        }
    }

    swap(arr[ind], arr[nextGreater]);
    for (int i = ind + 1; i < (n + ind) / 2; i++) 
    { 
        swap(arr[i], arr[n - (i - ind) - 1]);
    }

    cout << "The next permutation is: [";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    return 0;
}
