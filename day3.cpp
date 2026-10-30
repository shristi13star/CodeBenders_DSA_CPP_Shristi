#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}; // {-1,-2,-3,-4,-5}
    int sum = 0;
    int mx = INT_MIN;
    for (int i = 0; i < 5; i++) //  {1, 2, 3, 4, 5}
    {
        sum += arr[i];        // sum=sum+arr[i] sum=1+2=3
        mx = max(mx, arr[i]); // mx=max(1,2)=2
    }
    cout << "Sum of array elements: " << sum << endl;
    cout << "Maximum element in the array: " << mx << endl;
    // Merge two sorted arrays
    int a[] = {1, 4, 7}, b[] = {2, 3, 9, 10};
    int n = 3, m = 4, c[7];
    int i = 0, j = 0, k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while (i < n)
        c[k++] = a[i++];
    while (j < m)
        c[k++] = b[j++];
    for (int x : c)
        cout << x << " ";

    int arr1[5] = {1, 2, 0, 0, 5};
    int a[] = {0, 1, 0, 3, 12};
    int n = 5, slow = 0;
    for (int fast = 0; fast < n; fast++) // {0, 1, 0, 3, 12}
        if (a[fast] != 0)  // slow=2, 
            swap(a[slow++], a[fast]);  // {1,3,12,0,0}

    return 0;
}