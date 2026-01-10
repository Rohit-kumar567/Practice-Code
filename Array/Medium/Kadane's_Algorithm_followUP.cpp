// Follow-Up Question: Can you print the subarray
#include <bits/stdc++.h>
using namespace std;

int kadane_algo(vector<int>& arr)
{
    int maxvalu = INT_MIN;
    int start = 0;
    int anstart = -1, anend = -1;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        
        if(sum == 0)
        {
            start = i + 1;
        }
        
        if(sum > maxvalu)
        {
            maxvalu = sum;
            anstart = start;
            anend = i;
        }
        
        if(sum < 0)
        {
            sum = 0;
        }
    }
    
    cout << "The subarray is: [";
    for(int i = anstart; i <= anend; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
    
    return maxvalu;
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
    
    cout << kadane_algo(arr);
} 
