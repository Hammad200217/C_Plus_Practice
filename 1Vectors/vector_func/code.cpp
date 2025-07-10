#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5};

    cout << "size: " << numbers.size() << endl;
    // Accessing elements using index
    numbers.push_back(6);
    cout << "size after push_back: " << numbers.size() << endl;
    for (auto val : numbers) {
        cout << val << " " << endl;
    }
    // Accessing elements using iterator
    numbers.pop_back();
    cout << "size after pop_back: " << numbers.size() << endl;

    for (auto val : numbers) {
        cout << val << " ";
    }
    return 0;
}