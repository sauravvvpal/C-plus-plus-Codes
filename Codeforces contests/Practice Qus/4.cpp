#include <iostream>
#include <vector>
using namespace std;

const int N = 20010;
int n, a[N][6];
vector<int> ans(N);

int main() {
    cin >> n;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[j][i];
        }
    }
    for (int i = 0; i < n; i++) {
        int num = -1, cnt = 0;
        for (int j = 0; j < 5; j++) {
            int x = a[i][j];
            if (ans[x-1] == 0) cnt++;
            else if (ans[x-1] != i+1) {
                cnt = 0;
                break;
            }
            if (cnt == 1) num = x;
        }
        if (cnt == 1) ans[num-1] = i+1;
    }
    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < 5; j++) {
            if (a[i][j] == ans[i]) {
                x++;
            }
        }
        if (x == 5) continue;
        for (int j = 0; j < n; j++) {
            if (ans[j] == 0) {
                ans[j] = a[i][0];
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}