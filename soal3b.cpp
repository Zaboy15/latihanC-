// Soal nomor 1 a
#include <iostream>

using namespace std;

int main() {
    int low =20, high=0;
    while (low < high)
{
    low = low+3;
    high = high-2;
}
cout <<"Low : " << low <<" High : " << high << endl;
    return 0;
}