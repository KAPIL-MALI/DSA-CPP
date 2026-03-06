// Problem: Sort an Array of 0s, 1s and 2s
// Platform: GeeksforGeeks
// Approach: Count the number of 0s, 1s and 2s, then overwrite the array accordingly
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void sort012(vector<int>& arr) {
        int zero = 0, ones = 0, two = 0, i = 0;

        for(i = 0; i < arr.size(); i++){
            if(arr[i] == 0) zero++;
            if(arr[i] == 1) ones++;
            if(arr[i] == 2) two++;
        }

        i = 0;

        while(zero--) arr[i] = 0, i++;
        while(ones--) arr[i] = 1, i++;
        while(two--) arr[i] = 2, i++;
    }
};
