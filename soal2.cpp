// Soal nomor 1 a
#include <iostream>

using namespace std;

// Untuk perbedaan struct dan class yait terdapat pada aksesilitas data nya , jika default pada class itu data bersifat private , namun untuk struct bersifat public . 


// class Siswa{
//     // public:
//     int nim;
//     string nama;
//     float nilaiuts;
//     float nilaiuas;
//     float nilaitugas;
// };

struct Siswa {
    int nim;
    string nama;
    float nilaiuts;
    float nilaiuas;
    float nilaitugas;
};

int main() {
    Siswa siswa;
    siswa.nama = "Zakario";
    return 0;
}
