// Soal nomor 1 a
#include <iostream>

using namespace std;

// Jika break tercantum, ketika CPU selesai mengeksekusi pernyataan pada label case yang terpilih dan bertemu break maka eksekutor akan dikeluarkan dari pernyataan switch dan melanjutkan baris setelah pernyataan switch. Dan jika break tidak disertakan, maka CPU akan terus berjalan untuk mengeksekusi semua pernyataan termasuk pernyataan yang berada pada label case lain hingga bertemu kurung kurawal penutup }

int main() {
    int nomer ;
 
   cout << " Masukkan [1/2/3] : " ; cin >> nomer ;
   switch ( nomer ) {
         case 1 :
            cout << " Anda Memilih Angka 1 " ;
         break ;
 
         case 2 :
            cout << " Anda Memilih Angka 2 " ;
         break ;
 
         case 3 :
            cout << " Anda Memilih Angka 3 " ;
         break ;
 
         default :
            cout << " Pilihan default Terpilih " ;
         break ;
   }
    return 0;
}
