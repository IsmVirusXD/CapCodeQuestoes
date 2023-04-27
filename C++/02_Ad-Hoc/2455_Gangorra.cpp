#include <iostream>

using namespace std;

int main() {

    int P1, P2, C1, C2 = 0;


    cin >> P1 >> C1 >> P2 >> C2;

    int side_01 = P1 * C1;
    int side_02 = P2 * C2;

    if (side_01 == side_02)
    {
        cout << "0" << endl;
    }
    else if (side_01 > side_02)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << "1" << endl;
    }

    return 0;
}
