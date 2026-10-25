#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    char arr1[5] = {'a', 'b', 'c', 'd', 'e'};
    vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    // v.pop_back();
    cout << v.size() << endl;
    cout << v[5] << endl;
    cout << arr[0] << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    int a[10] = {10, 20, 30, 40, 50};
    int n = 5, pos = 2, x = 99;
    for (int i = n; i > 2; i--) // {10, 20,99,30 ,40 ,50 }
        a[i] = a[i - 1];        // arr[5]
    a[pos] = x;                 // arr[2]=99
    for (int i = 0; i <= n; i++)
        cout << a[i] << " ";

    int b[4] = {10, 20, 30, 40}, m = 4, d = 1;
    // for (int i = d; i < m - 1; i++)  // {10,30,40,40}
    //     b[i] = b[i + 1]; // b[2]= b[3]
    // m--; // m=3
    // for (int i = 0; i < 3; i++)
    //     cout << b[i] << " ";
    for(int i=3;i>=0;i--){
        cout<<b[i]<<" ";
    }
    int left=0;
    int right=3;
    while(left<right){
        swap(b[left],b[right]); // b={40,30,20,10}
        left++;
        right--;
    }
    int arr[3]={10,20,30};  
    // {30,10,20}
    // {20,30,10}
    // {10,20,30}
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int k=9;
    k=k%7; 
    vector<int> temp={10, 20, 30, 40, 50, 60, 70}; 
    reverse(temp.begin(),temp.begin()+k);
    reverse(temp.begin()+k,temp.end());
    reverse(temp.begin(),temp.end());
    return 0;
    int key=30;
    for(int i=0;i<temp.size();i++){
        if (temp[i]==key){
            cout<<i;
            break;
        }
    }
    int low=0;
    int high=temp.size()-1;
    while(low<=high){
        int mid=(low+high)/2;  
        if (temp[mid]==key){
            cout<<mid;
            break;
        }
        else if(temp[mid]<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
}
