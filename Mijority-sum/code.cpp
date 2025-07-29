#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find the majority element
    int majorityElement = -1;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            majorityElement = a[i];
            count = 1;
        } else if (a[i] == majorityElement) {
            count++;
        } else {
            count--;
        }
    }

    // Verify if the majority element is valid
    count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == majorityElement) {
            count++;
        }
    }

    if (count > n / 2) {
        cout << "Majority element: " << majorityElement << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}

// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n= nums.size();
//          for( int val : nums){
// int freq =0;
//  for (int el : nums ){
//     if(el == val){
//         freq++;
//     }
    
//  }
//  if (freq > n/2){
//     return val;
//  }

//          }
//          return -1;
//     }
// };

// class Solution {
// public:
//     int majorityElement(vector<int>nums) {
//         int n= nums.size();
//         //  sort
//         sort(nums.begin(), nums.end());

//         // freq
//         int freq = 1, ans = nums[0];
//         for(int i=0 ; i<n ; i++){
//             if(nums[1] == nums[i-1]){
//                 freq++;
//             }
//             else{
//                 freq = 1;
//                 ans = nums[1];
//             }
//             if(freq > n/2){
//                 return ans;
//             }
           
//         }
//         return ans; 
//     }
// };