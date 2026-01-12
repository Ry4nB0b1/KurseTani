#include <iostream>
using namespace std;

int Shuma_Cift_Rek(int n)
{
    if (n > 100)
    {
        return 0;
    }
    if (n % 2 == 0)
    {
        return n + Shuma_Cift_Rek(n + 1);
    }
    return Shuma_Cift_Rek(n + 1);
}

int main()
{
    int shuma = Shuma_Cift_Rek(10);

    cout << "Shuma e numrave cift nga 10 ne 100 eshte: " << shuma << endl;

    return 0;
}
