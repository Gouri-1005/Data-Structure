//  4 sum problem 

#include <iostream>
#include <algorithm>
using namespace std;

void fourSum(int nums[], int numsSize, int target, int result[][4], int& count) {
    sort(nums, nums + numsSize);
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            int left = j + 1;
            int right = numsSize - 1;
            while (left < right) {
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum < target) {
                    left++;
                } else if (sum > target) {
                    right--;
                } else {
                    result[count][0] = nums[i];
                    result[count][1] = nums[j];
                    result[count][2] = nums[left];
                    result[count][3] = nums[right];
                    count++;
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                }
            }
        }
    }
}

int main() {
    int nums[] = {1, 0, -1, 0, -2, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 0;
    int result[1000][4];
    int count = 0;
    fourSum(nums, numsSize, target, result, count);
    for (int i = 0; i < count; i++) {
        cout << "[" << result[i][0] << ", " << result[i][1] << ", " << result[i][2] << ", " << result[i][3] << "]\n";
    }
    return 0;
}
