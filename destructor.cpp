#include <iostream>
using namespace std;
/// Class angka
/** class angka digunakan menampung semua variable dan juga fungsi yang dibutuhkan untuk mengelola data angka */
class angka
{
private:
    int *arr;
    int panjang;

public:
    angka(int); // Constructor
    ~angka();   // Destructor
    void cetakData();
    void isiData();
};
angka::angka(int i){ // Constructor
    panjang = i;
    arr = new int[i];
    isiData();
}
angka::~angka(){ // Destructor
    cout << endl;
    cetakData();
    delete[] arr;
    cout << "Alamat Array Sudah Dilepaskan" << endl;
}
/// prosedur cetakData
/** digunakan untuk print data angka yang sudah disimpan didalam variable */
void angka::cetakData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}
/// prosedur isiData
/** digunakan untuk mengisi data ke class angka */
void angka::isiData()
{
    for (int i = 1; i <= panjang; i++)
    {
        cout << i << " = ";
        cin >> arr[i];
    }
    cout << endl;
}
/// main program
/** tempat menjalankan program utama */
int main()
{
    angka belajarcpp(3);                // Constructor Dipanggil
    angka *ptrBelajarcpp = new angka(5); // Constructor Dipanggil
    delete ptrBelajarcpp;               // Destructor Dipanggil

    return 0;
}