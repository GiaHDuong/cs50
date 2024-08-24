#include<iostream>
#include<vector>
using namespace std;

void minimumCoin(int change);

int main() {
    int change;

    do {
        cout << "Change owed: ";
        cin >> change;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            change = -1;
        }
    } while (change<0);

    minimumCoin(change);

    return 0;

}

void minimumCoin(int change) {
    int cnt=0;

    vector<int> coins = {25, 10, 5, 1};

    for (int i=0; i<coins.size(); i++) {
        cout << coins[i-1] << endl;

        while (change >= coins[i] && (change >=coins[0] || change < coins[i-1])) {
            change -= coins[i];
            cnt++;
        }
    }

    cout << cnt << endl;
}
