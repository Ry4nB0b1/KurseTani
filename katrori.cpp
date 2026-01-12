#include <iostream>
using namespace std;

int Katrori_Rek(int n) {
    if (n == 0) {
        return 0;
    }
    
    return n * n + Katrori_Rek(n - 1);
}

int main() {
    int n;
    
    cout << "Shkruani nje numer n: ";
    cin >> n;
    
    int shuma = Katrori_Rek(n);
    cout << "Shuma e katrorëve të numrave nga 1 deri në " << n << " është: " << shuma << endl;
    
    return 0;
}
