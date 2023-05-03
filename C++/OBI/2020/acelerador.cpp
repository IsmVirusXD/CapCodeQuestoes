//https://olimpiada.ic.unicamp.br/pratique/p2/2020/f1/acelerador/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int ent = 0 ; cin >> ent;

    ent+= -3;
    while(ent > 8)
    {
        ent -= 8;
    }

    if(ent <= 3)
    {
        cout << 1;
    }
    else if (ent == 4)
    {
        cout << 2;
    }
    else
    {
        cout << 3;
    }
    return 0;
}
