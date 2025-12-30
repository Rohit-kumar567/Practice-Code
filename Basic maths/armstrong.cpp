// You are given an integer n. You need to check whether it is an armstrong number or not. Return true if it is an armstrong number, otherwise return false.

#include<bits/stdc++.h>
using namespace std;

int countfun(int n)
{
    int count = 0;
    while(n > 0)
    {
        int digit = n % 10;
        n = n / 10;
        count += 1;
    }
    return count;
}

void armstrong_num(int n, int count)
{
    int orginal = n;
    int sum = 0;
    
    while(n != 0)
    {
        int digit = n % 10;
        n = n / 10;
        sum = sum + pow(digit, count);
    }
    
    if(orginal == sum)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }  
}

int main()
{
    int n;
    cin >> n;
    int count;
    
    count = countfun(n);
    armstrong_num(n, count);
}


//Optimal Solution: 

#include <bits/stdc++.h>
using namespace std;

// Count method
int count_Fun(int n)
{
    int count;
    while(n > 0)
    {
        n /= 10;
        count += 1;
    }
    return count;
}

// Power Function
int power_Fun(int base, int expo)
{
    int result = 1;
    for(int i = 0;  i < expo; i++)
    {
        result *= base;
    }
    
    return result;
}

// Armstrong Function
void Armstrong_Fun(int n)
{
    int orginal = n;
    int count = count_Fun(n);
    int sum = 0;
    
    while(n > 0)
    {
        int digit = n % 10;
        sum += power_Fun(digit, count);
        n /= 10;
    }
    
    if(sum == orginal)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    
    Armstrong_Fun(n);
    
}
