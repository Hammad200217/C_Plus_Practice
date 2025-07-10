#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    cout << "Capacity of vector: " << vec.capacity() << endl;
    cout << "Size of vector: " << vec.size() << endl;
    return 0;

}