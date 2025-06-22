#include <iostream>
using namespace std;
 int main (){
int nums[]={5, 3, 16, 20, 0};
int size = 5;
 int smallest = INT_MAX;

 for(int i=0; i<size; i++) 
 {
   smallest= min(nums[i],smallest)
 }
cout<< "Smallest value is "<< smallest<< endl;

    return 0;
 }