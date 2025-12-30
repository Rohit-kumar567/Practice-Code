// Palindrome Number: Using reverse function 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, temp;
    getline(cin, s);
    
    temp = s;
    reverse(temp.begin(), temp.end());
    
    if(s == temp)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return 0;
}

// Using stack: 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stack<char> st;
    
    string temp = s;
    
    for(char c : s)
    {
        st.push(c);
    }
    s.clear();
    
    while(!st.empty())
    {
        s.push_back(st.top());
        st.pop();
    }
    
    if(temp == s)
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    
    return 0;
}
