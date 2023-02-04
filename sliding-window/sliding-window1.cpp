#include <iostream>
using namespace std;
// this is first question about sliding windows
// question : find the maximum sum of given size in the given array
// here array and size is given

int findMax(int arr[], int n, int k)
{
    int max_sum = 0;
    // here firstly we calcualte first k element sum
    for (int i = 0; i < k; i++)
    {
        max_sum += arr[i];
    }
    int window_sum = max_sum;
    //  now after initialising the window sum as max sum
    // we will start the loop from k to n
    // and we will subtract the first element of the window and add the next element of the window
    // and we will compare the window sum with the max sum
    // and we will update the max sum if the window sum is greater than the max sum
    for (int i = k; i < n; i++)
    {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
    }
    return max_sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << findMax(arr, n, k);

    return 0;
}