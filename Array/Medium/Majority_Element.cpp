#include <bits/stdc++.h>
using namespace std;

// This solution is using hashing(brute force)
int majority_element(vector<int>& arr)
{
    int size = arr.size();
    unordered_map<int, int> hash(size);
    for(int i = 0; i < size; i++)
    {
        hash[arr[i]] += 1;
    }
    
    for(auto& pair : hash)
    {
        if(pair.second > size/2) 
        {
            return pair.first;
        }
    }
    return -1;
}

// Optimal solution(implements the Boyer-Moore Voting Algorithm)
int majority_element(vector<int>& arr)
{
    int n = arr.size();
    int count1 = 0;
    int element = 0;
    for(int i = 0; i < n; i++)
    {
        if(count1 == 0)
        {
            element = arr[i];
            count1++;
        }
        else if(element == arr[i])
        {
            count1++;
        }
        else
        {
            count1--;
        }
    }
    
    // Verfication step usually not required for this question but for your information i am writing
    int count2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(element == arr[i])
        {
            count2++;
        }
    }
    
    if(count2 > n / 2)
    {
        return element;
    }
    
    return -1;
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
    
    cout << majority_element(arr);
}

//Note Points:

// 1) A majority element is an element that appears more than size/2 times
