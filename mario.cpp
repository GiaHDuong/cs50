#include <iostream>
using namespace std;

int main() {
    int height;

    cout << "Height: ";
    cin >> height;

    for (int i=0; i<=height; i++) {
        string space(height-i, ' ');
        string brick(i, '#');
        cout << space << brick << "\n";
    }
}
