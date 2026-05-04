#include <iostream>
using namespace std;

class angka {
private:
    int *arr;
    int panjang;
public:
    angka(int); // constructor
    ~angka();   // destructor
    void cetakData();
    void isiData();
};

angka::angka(int i) { // constructor
    panjang = i;
    arr = new int[i]; // Alokasi memori
    isiData();
}

angka::~angka() { // destructor
    cout << endl;
    cetakData();
    delete[] arr; // Melepaskan memori agar tidak terjadi memory leak
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = " << arr[i] << endl;
    }
}

void angka::isiData() {
    for (int i = 1; i <= panjang; i++) {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}

int main() {
    return 0;
}