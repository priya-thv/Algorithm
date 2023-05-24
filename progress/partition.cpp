#include <vector>
#include <numeric> // Required for std::accumulate

class Solution {
public:
    bool canThreePartsEqualSum(std::vector<int>& arr) {
        int n = arr.size();
        int totalSum = std::accumulate(arr.begin(), arr.end(), 0);

        // If the total sum is not divisible by 3, return false
        if (totalSum % 3 != 0) {
            return false;
        }

        int targetSum = totalSum / 3;
        int currentSum = 0;
        int partitions = 0;

        // Iterate through the array and try to find three partitions
        for (int i = 0; i < n; i++) {
            currentSum += arr[i];
            
            // If we found a partition, reset currentSum and increment partitions count
            if (currentSum == targetSum) {
                currentSum = 0;
                partitions++;
            }
            
            // If we found three partitions, return true
            if (partitions == 3) {
                return true;
            }
        }

        // If we couldn't find three partitions, return false
        return false;
    }
};
