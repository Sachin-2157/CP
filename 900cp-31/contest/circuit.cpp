#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> switches(2 * n);
    int one_count = 0;
    int zero_count = 0;
    // Reading switch states and counting ones
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> switches[i];
        if (switches[i] == 1)
        {
            one_count++;
        }
        else
        {
            zero_count++;
        }
    }

    // Calculating minimum and maximum lights on
    int min_lights_on = one_count % 2;
    int max_lights_on = min(n, one_count);
    if (zero_count != 0)
    {
        cout << min_lights_on << " " << max_lights_on << "\n";
    }
    else
    {
        cout << min_lights_on << " " << 0<< "\n";
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
