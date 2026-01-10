#include <bits/stdc++.h>
using namespace std;

// Brute force solution
int kadens_sub_sum_array(vector<int>& arr)
{
    int maxsum = 0;
    for(int i  = 0; i < arr.size(); i++)
    {
        int sum = 0;
        
        for(int j = i; j < arr.size(); j++)
        {
            sum += arr[j];
            
            maxsum =  max(sum, maxsum);
        }
    }
    return maxsum;
}

// Optimal solution
int kadens_sub_sum_array(vector<int>& arr)
{
    int sum = 0;
    int maxsum = INT_MIN;
    
    for(int i = 0; i< arr.size(); i++)
    {
        sum += arr[i];
        
        if(sum > maxsum)
        {
            maxsum = sum;
        }
        
        if(sum < 0)
        {
            sum = 0;
        }
    }
    return maxsum;
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
    
    cout << kadens_sub_sum_array(arr);
}
