#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main()
{
    array<int,5> input;

    for(int i = 0; i < 5;i++)
    {
        cin >> input[i];
    }

    if (is_sorted(input.begin(),input.end()))
    {
        cout << "C" << endl;
    }
    else
    {
        reverse(input.begin(),input.end());
        if (is_sorted(input.begin(),input.end()))
        {
            cout << "D" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }


    return 0;
}
