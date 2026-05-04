#include <iostream>
#include <string> 
using namespace std;

class Mahasiswa {

    private:
    static int nim;
    public:
    int id;
    string nama;
    
    void setID();
    void printAll();

    //pembuatan static fuction
    static void setnim(int pnim) {
        nim = pnim;
    };

    static int getnim() {
        return nim;
    }

    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    };
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID() {
    id = ++nim;

}

void Mahasiswa::printAll() {
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main() {

    //pembuatan object dan pemeberian nilai
    Mahasiswa mhs1("Sri Dadi");
    Mahasiswa mhs2("Budi Jatmiko");
    //memberi nilai pada setNim() untuk merubah nilai Nim
    Mahasiswa::setnim(9);
    Mahasiswa mhs3("Andi Janu");
    Mahasiswa mhs4("Joko wahono");


    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    //menampilkan Nim terakhir yang di proses
    cout << "Akses dari luar object = " << Mahasiswa::getnim() << endl;
    system("Pause");

    return 0;
}