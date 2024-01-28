#include <iostream>
using namespace std;

const int MAX_N = 20;

int maxLootUtil(int hval[], int n, int memo[]) {
    if (n < 0)
        return 0;

    if (memo[n] != -1)
        return memo[n];

    // Either rob current house and take loot from two houses ago,
    // or skip current house and take loot from the previous house.
    int loot = max(maxLootUtil(hval, n - 2, memo) + hval[n], maxLootUtil(hval, n - 1, memo));

    memo[n] = loot;
    return loot;
}

int maximumLoot(int hval[], int n) {
    int memo[MAX_N];
    for (int i = 0; i < MAX_N; i++)
        memo[i] = -1;

    return maxLootUtil(hval, n, memo);
}

int main() {
    int n;
    cin >> n;

    int hval[MAX_N];
    for (int i = 0; i < n; i++) {
        cin >> hval[i];
    }

    cout << maximumLoot(hval, n - 1);

    return 0;
}
