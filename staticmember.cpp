#include <iostream>
using namespace std;

class Mahasiswa { //membuat class mahasiswa

public:
    static int nim; //deklarasi variabel static yaitu variabel nim
    //deklarasi variabel member
    int id;
    string nama;

    //deklarasi prosedur setID() dan printALL()
    void setID();
    void printALL();

    //pembuatan contructor Mahasiswa dengan parameter pnama
    Mahasiswa(string pnama) :nama(pnama) {
        setID();
    }
};

//memberi value ke variabel nim dari class mahasiswa
int Mahasiswa::nim = 10;

//mengimplementasikan prosedur - prosedur di luar kelas
void Mahasiswa::setID() {
    id = ++nim;
};

void Mahasiswa::printALL() {
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;

};

int main () {
    //membuat object dan memberi nilai 
    Mahasiswa mhs1 ("Lia Kurnia");
    Mahasiswa mhs2 ("Asroni");
    Mahasiswa mhs3 ("Andi Kurniawan");
    Mahasiswa mhs4 ("Joko Purbo");

    //memanggil prosedur printALL()
    mhs1.printALL();
    mhs2.printALL();
    mhs3.printALL();
    mhs4.printALL();

    return 0;
    
}