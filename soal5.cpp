// Soal nomor 1 a
#include <iostream>

using namespace std;


float luaslingkaran(float r)
{
 float luas;


 luas=3.14*r*r;
 return(luas);
}

float luaspersegipanjang(float p,float l)
{
 float luas;


 luas=p*l;
 return(luas);
}

int main() {
    int pilihan;
    cout<<"[=============================]"<<endl;
    cout<<"[MENU]" << endl;
    cout<<"[]"<<endl;
    cout<<"[1.Luas Lingkaran]"<< endl;
    cout<<"[2.Luas Persegi Panjang]"<< endl;

    cout<<"[]"<<endl;
    cout<<"[=============================]"<<endl;
    cout<<"Masukkan Pilihan [1/2]:";cin>>pilihan;

    if(pilihan == 1){
        float radius, luas;
        cout << "Masukkan Jari Jari :";
        cin >> radius;

        luas = luaslingkaran(radius);

        cout<<"Luas lingkaran = "<<"3,14"<<"x"<<radius<<"x"<<radius<<" = "<<luas<<endl;

    } else if (pilihan == 2){
        float panjang , lebar, luas;

        cout<< "Masukkan Panjang:";
        cin >> panjang;
        cout << "Masukkan Lebar :";
        cin >> lebar;

        luas = luaspersegipanjang(panjang , lebar);

        cout <<"Luas Persegi Panjang = "<<luas; 


    } else {

        cout << "Data Input Salah !!";

    }
    return 0;
}
