#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void fast_io()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
}
 
signed main()
{
    fast_io();
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
 
        s += s;
        int ans = 0;
        int index = -1;
 
        for (int i = 2 * n - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
                index = i;
 
            if (s[i] == c)
                ans = max(ans, index - i);
        }
 
        cout << ans << endl;
    }
 
    return 0;
}