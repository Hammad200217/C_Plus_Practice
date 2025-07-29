#include <iostream>
#include <vector>
using namespace std; 

vector<int> PairSum(vector<int> nums, int target) {
    vector<int> ans; 
   int n = nums.size();
 int i= 0, j = n - 1;
 while (i<j){
    int pairSum = nums[i] + nums[j];
    if (pairSum < target) {
        i++;
    } else if (pairSum > target) {
        j--;
    } else {
        ans.push_back(nums[i]);
        ans.push_back(nums[j]);
       return ans; // Return the first pair found
    }
 }

    return ans;
}


int main(){
    vector<int> numbers = {1, 2, 11,15};
    int target = 26;

    vector<int> result = PairSum(numbers, target);
    cout<<ans[0]<<" "<<ans[1]<<endl;

    return 0;
}