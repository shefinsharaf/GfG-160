#include <bits/stdc++.h>
using namespace std;
    int getSecondLargest(vector<int> &arr)
    {
        int n = arr.size();
        int largest = 0;
        int secondLargest = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest)
            {
                secondLargest = largest;
                largest = arr[i];
            }
            else if(arr[i] > secondLargest && arr[i] != largest)
             secondLargest= arr[i];
        }
        if(secondLargest == 0)
        return -1;
        return secondLargest;
    };
int main()
{
    vector<int> arr = {50,34,25,40,28,2,1};
    int result = getSecondLargest(arr);
    cout <<  result;
    return 0;
}