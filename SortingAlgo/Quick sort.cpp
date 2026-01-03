#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    
    while(i < j)
    {
        while(i <= high && arr[i] <= pivot)
        {
            i++;
        }
        
        while(j >= low && arr[j] > pivot)
        {
            j--;
        }
        
        if(i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int>& arr, int low, int high)
{
    if(low < high)
    {
        int pIndex = partition(arr, low, high);
        
        qs(arr, low, pIndex-1);
        qs(arr, pIndex+1, high);
    }
}

vector<int> quick_sort(vector<int>& arr, int n)
{
    qs(arr, 0, n-1);
    return arr;
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
    
    //quick sort
    vector <int> v = quick_sort(arr, n);
    
    for(int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
