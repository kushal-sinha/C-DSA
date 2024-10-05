#include <iostream>
using namespace std;

bool ispossiblesolution(int arr[], int n, int days, int mid)
{
    int left = 1;
    int weightsum = 0;

    for (int i = 0; i < n; i++)
    {
        if (weightsum + arr[i] <= mid)
        {
            weightsum += arr[i];
        }
        else
        {
            left++;
            if (left > days || arr[i] > mid)
            {
                return false;
            }
            weightsum = arr[i];
        }
    }
    return true;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int days = 5;

    int sum = 0;
    int ans = -1;

    // Calculate total sum of the array
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    // Start binary search with s as the maximum single element and e as the sum of all elements
    int s = 0;
    int e = sum;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        if (ispossiblesolution(arr, n, days, mid))
        {
            ans = mid;
            e = mid - 1; // Try to find a smaller feasible solution
        }
        else
        {
            s = mid + 1; // Try with a larger mid
        }
    }

    cout << "The minimum weight that can be loaded is-> " << ans;

    return 0;
}
