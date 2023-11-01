#include<bits/stdc++.h>
using namespace std;

int n1, m1, n2, m2;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> n1 >> m1 >> n2 >> m2;

    long long int m = m1 * m2;
    long long int j = (m1 * n2) + (m2 * n1);

    long long int tmp = gcd(m, j);
    cout << j / tmp << " " << m / tmp;

    return 0;
}