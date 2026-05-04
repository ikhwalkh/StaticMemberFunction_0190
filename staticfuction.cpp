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

void Mahasiswa::printAll() {
    cout << "ID : " << id << endl;
    cout << "Nama : " << nama << endl;
    cout << endl;
};