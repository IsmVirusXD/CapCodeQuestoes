//https:olimpiada.ic.unicamp.br/pratique/p1/2016/f1/clube/
#include <bits/stdc++.h>
using namespace std;


vector<int> membros;


int main() {
    int s = 0; cin >> s;
    for(int i = 0; i < 7; i++)
    {
        int a = 0; cin >> a;
        membros.push_back(a);
    }

    membros[0] = membros[0] - membros[3] - membros[4];
    membros[1] = membros[1] - membros[3] - membros[5];
    membros[2] = membros[2] - membros[4] - membros[5];

    int r = 0;
    for (int i = 0; i < 7; i++)
    {
        r += membros[i];
    }

    if (r == s)
    {
        cout << 'N';
    }
    else
    {
        cout << 'S';
    }
    return 0;
}
