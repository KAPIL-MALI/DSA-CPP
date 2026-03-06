// Problem: Third Largest Element
// Platform: GeeksforGeeks
// Approach: Maintain three variables for first, second, and third largest while traversing the array
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        if(n < 3) return -1;
        
        int maxi = INT_MIN, maxi2 = INT_MIN, maxi3 = INT_MIN;

        for(int i = 0; i < n; i++){
            if(arr[i] > maxi){
                maxi3 = maxi2;
                maxi2 = maxi;
                maxi = arr[i];
            }
            else if(arr[i] > maxi2){
                maxi3 = maxi2;
                maxi2 = arr[i];
            }
            else if(arr[i] > maxi3){
                maxi3 = arr[i];
            }
        }

        return maxi3;
    }
};
