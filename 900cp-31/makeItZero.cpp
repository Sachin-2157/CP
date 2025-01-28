    #include <bits/stdc++.h>
    using namespace std;


    const int M = 1e9 + 7;
    const int N = 1e6 + 10;

    void solve()
    {

        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >>v[i];
        }
        if (n % 2 != 0)
        {
            cout << "4\n";
            cout << "1" << n - 1 << '\n';
            cout << "1" << n - 1 << '\n';
            cout << n - 1 << " " << n << '\n';
            cout << n - 1 << " " << n << '\n';
        }
        else
        {
            cout << "2\n";
            cout << "1" << n << '\n';
            cout << "1" << n << '\n';
        }
    }

    int32_t main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int t;
        cin >> t;
        while (t--)
        {
            solve();
        }
        return 0;
    }