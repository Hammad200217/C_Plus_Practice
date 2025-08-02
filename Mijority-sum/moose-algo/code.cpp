#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

// function to find the majority element using the Boyer-Moore Voting Algorithm
int majorityElement(vector<int>& nums) {
    int count = 0, candidate = -1;
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
}
 int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find the majority element
    int majorityElementCandidate = majorityElement(a);

    // Verify if the majority element is valid
    int count = count_if(a.begin(), a.end(), [majorityElementCandidate](int num) {
        return num == majorityElementCandidate;
    });

    if (count > n / 2) {
        cout << "Majority element: " << majorityElementCandidate << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}