//https://www.beecrowd.com.br/judge/pt/problems/view/2454
#include<iostream>

using namespace std;

int main()
{
    bool P = 0;
    bool R = 0;

    cin >> P >> R;

    if (!P)
    {
        cout << "C" << endl;
    }
    else
    {
        string result = (R) ?
        "A" : "B";
        cout << result << endl;
    }
    return 0;
}

