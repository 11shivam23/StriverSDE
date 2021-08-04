#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void swap(vector<int> &arr,int i,int j){
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
void dnf(vector<int> &arr,int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    while (mid < high)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr,mid,low);
            low++;mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr,mid,high);
            high--;
            break;
        default:
            break;
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> arr;
    int n;
    int temp;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    dnf(arr,n);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}