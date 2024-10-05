#include <iostream>
using namespace std;
int BinarySearh(int arr[7])
{
    int s = 0;
    int e = 6;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return arr[s];
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 3, 2};
    int peak = BinarySearh(arr);
    cout << "The peak Element is ->" << peak << endl;
    return 0;
}