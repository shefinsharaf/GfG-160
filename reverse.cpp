#include <iostream>
#include <vector>
using namespace std;

// function to reverse an array
void reverseArray(vector<int> &arr) {
     int limit = arr.size();
     int i = 0,j = 0;
     for(i = 0,j=limit -1;i<j;i++,j--)
     {
         swap(arr[i],arr[j]);
     }
}

int main() {
    vector<int> arr = { 1, 4, 3, 2, 6, 5 };

    reverseArray(arr);
  
    for(int i = 0; i < arr.size(); i++) 
        cout << arr[i] << " ";
    return 0;
}