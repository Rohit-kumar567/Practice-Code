// Find All divisors of the number 

// Optimal code:
#include<bits/stdc++.h>
using namespace std;

void divisor_Fun(int n, vector<int>& v)
{
    for(int i = 1; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            v.push_back(i);
            if(i != n/i)
            {
                v.push_back(n/i);
            }
        }
    }
    
    sort(v.begin(), v.end());
    
    for(int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    divisor_Fun(n, v);
    return 0;
}
