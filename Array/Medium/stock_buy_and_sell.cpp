#include <bits/stdc++.h>
using namespace std;

// Brute force approach
void sell_buy(vector<int>& price)
{
    int maxi = INT_MIN;
    int start = -1;
    int end = -1;
    //Each day as buy day
    for(int i = 0; i < price.size(); i++)
    {
        //Each daya as sell
        for(int j = i + 1; j < price.size(); j++)
        {
            int profit = price[j] - price[i];
            if(profit > maxi)
            {
                maxi = profit;
                start = i;
                end = j;
            }
        }
    }
    
    cout << "Maximum profit: "<< maxi << endl;
    cout << "Buy day: " << start << endl;
    cout << "Sell day: " << end << endl;
}

// Optimal approach
void sell_buy(vector<int> &arr)
{
    int min = INT_MAX;
    int maximum = 0;
    for(int price : arr)
    {
        //Finding the min, if we get greater after finding the smallest then update the profit
        if(price < min)
        {
            min = price;
        }
        else
        {
            maximum = max(maximum, price - min);
        }
    }
    
    cout << maximum << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i  = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    sell_buy(arr);
}
