#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> v1 = {1, 2, 3, 4, 5};

    for(int val : v1) {
        cout << val << endl; // Output each element in the vector
    }
    return 0;
}