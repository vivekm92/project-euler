#include <bits/stdc++.h>
#define MAX 1000
#define ll long long
using namespace std;

// T(N) : O(N)
// S(N) : O(1)
int solve1() {
    int res = 0;
    for (int i = 1; i < MAX; i++) {
        if (i % 3 == 0 || i % 5 == 0) res += i;
    }

    return res;
}


inline int get_n(int n) {
    return MAX % n ? (int )(MAX / n) : (int )(MAX / n) - 1;
}

// T(N) : O(1)
// S(N) : O(1)
int solve2(int x, int y) {

    int n1 = get_n(x), n2 = get_n(y), n3 = get_n(x * y);
    ll v1 = (x * n1 * (n1 + 1)) / 2;
    ll v2 = (y * n2 * (n2 + 1)) / 2;
    ll v3 = (x * y * n3 * (n3 + 1)) / 2;

    return v1 + v2 - v3;
}

int main() {

    cout << solve1() << "\n";
    cout << solve2(3, 5) << "\n";

    return 0;
}
