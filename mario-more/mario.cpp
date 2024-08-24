#include<iostream>
using namespace std;

int main() {
    int height;

    do {
    cout << "Height: ";
    cin >> height;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore the rest of input
        height = -1;
    }

    } while (height<1 || height>8) ;

    for (int i=0; i<=height; i++) {
        string space(height-i, ' ');
        string brick(i, '#');
        cout << space << brick << "  " << brick << space << '\n';
    }
}
