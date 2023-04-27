#include <iostream>
#include <algorithm>
#lnclude <array>


using namespace std;

int main()
{
    array<int, 6> sorteio = {34,55,77,12,21,99};
    array<int, 5> resposta = {5,3,77,55,42,34};


    sort(sorteio);
    sort(resposta);




    return 0;
}
