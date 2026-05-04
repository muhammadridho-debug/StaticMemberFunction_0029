#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;
public:
    mahasiswa();
    mahasiswa(int);
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();
};

mahasiswa::mahasiswa() {
}

mahasiswa::mahasiswa(int iNim) {
    nim = iNim; //definisi hanya untuk nim
}

mahasiswa::mahasiswa(string iNama) {
    nama = iNama; //definisi hanya untuk nama
}

mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim; //definisi untuk nim dan nama
    nama = iNama;
}

void mahasiswa::cetak() {
    cout << endl << "Nim = " << nim << endl;
    cout << "Nama= " << nama << endl;
}

int main() {
    return 0;
}