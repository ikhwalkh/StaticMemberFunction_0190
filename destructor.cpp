#include <iostream>
using namespace std;

class angka
{
private:
    int *arr;
    int panjang;

public:
    angka(int); // constructor
    ~angka();   // destructor
    void cetakData();
    void isiData();
};

angka ::angka(int i)
{
    panjang = i;
    arr = new int(i);
    isiData();
}
angka ::~angka()
{
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat array sudah dilepaskan" << endl;
}

void angka::cetakData()
{
    for (int i = i; i <= panjang; i++)
    {
        cout << i << "=" << arr[i] << endl;
    }
}
void angka::isiData()
{
    for (int i = i; i <= panjang; i++)
    {
        cout << i << "=";
        cin >> arr[i];
    }
    cout << endl;
}

int main()
{
    angka belajarcpp(3);
    angka *ptrbelajarcpp = new angka(5);
    delete ptrbelajarcpp;
    return 0;
}