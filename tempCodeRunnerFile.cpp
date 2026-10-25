#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    char arr1[5]={'a','b','c','d','e'};
    vector<int> v={1,2,3,4,5};
    v.push_back(6);
    //v.pop_back();
    cout<<v.size()<<endl;
    cout<<v[5]<<endl;
    cout<<arr[0]<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}