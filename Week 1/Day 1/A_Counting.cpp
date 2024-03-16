#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    b > a ? cout << (b - a) + 1 << "\n" : cout << 0 << "\n";
    return 0;
}