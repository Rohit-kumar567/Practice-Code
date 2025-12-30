// You are given an integer n. Return the integer formed by placing the digits of n in reverse order.

// If problem ask you If the problem asks to "print" the reversed digits: Then 
// Int reversal 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int digit;
    cin >> n;
    
    while(n > 0)
    {
        digit = n % 10;
        n = n / 10;
        
        cout << digit;
    }
    
    // cout << digit;
}

// If the problem asks to "return the integer”: Then

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, rev = 0, digit = 0;
    cin >> n;
    
    while(n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    cout << rev;
    return 0;
}
