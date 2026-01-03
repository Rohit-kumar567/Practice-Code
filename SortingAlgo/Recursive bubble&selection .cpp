#include <bits/stdc++.h>
using namespace std;

void rec_bubble_sort(vector<int>& arr, int n)
{
    if(n == 1)
    {
        return;
    }
    
    for(int j = 0; j < n-1; j++)
    {
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }
    }
    
    rec_bubble_sort(arr, n-1);
}

void insertion_sort(vector<int>& arr, int i, int n)
{
    
    if(i == n)
    {
        return;
    }
    
    int j = i;
    while(j > 0 && arr[j-1] > arr[j])
    {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
    
    insertion_sort(arr, i+1, n);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // rec_bubble_sort(arr, n);
    insertion_sort(arr, 1, n);
    
    for(int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
