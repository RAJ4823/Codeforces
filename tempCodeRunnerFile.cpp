#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool wub(string s, int i)
{
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        return false;
    else
        return true;
}

int main()
{
    string s;
    cin >> s;
    string t;
    int j = 0;

    for (int i = 2; i < s.length(); i++)
    {
        if (wub(s, i))
            t.push_back(s[i+2]);
        else if (wub(s, i-1))
            t.push_back(s[i+1]);
        else if (wub(s, i-2))
            t.push_back(s[i]);
    }
    cout << t << endl;
    return 0;
}