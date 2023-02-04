#include <iostream>
#include <vector>
#include <list>
using namespace std;

// question : find the first negative number in every window of size k
// here array and size is given
// k = 3, arr = { 12, -1, -7, 8, -16, 30, 16, 28 }
// output : -1 -1 -7 -16 -16 0

void solve(int arr[], int n, int k)
{

    int i = 0;
    int j = 0;
    vector<int> ans;
    list<int>
        l;
    while (j < n)
    {
        if (arr[j] < 0)
        {
            l.push_back(arr[j]);
        }
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            if (l.size() == 0)
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(l.front());
                if (arr[i] == l.front())
                {
                    l.pop_front();
                }
            }
            i++;
            j++;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int arr[] = {12, -1, -7, 8, -16, 30, 16, 28};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    vector<int> ans;
    solve(arr, n, k);

    return 0;
}