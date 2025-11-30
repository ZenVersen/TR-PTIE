#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nama;
    int usia;
    float berat, tinggi, tinggiMeter, imt;

    cout << "=== PROGRAM MENGHITUNG INDEKS MASSA TUBUH (IMT) ===\n\n";

    // Input nama dan usia
    cout << "Masukkan Nama        : ";
    getline(cin, nama);

    cout << "Masukkan Usia (tahun): ";
    cin >> usia;

    // Input berat dan tinggi
    cout << "Masukkan Berat Badan (kg): ";
    cin >> berat;

    cout << "Masukkan Tinggi Badan (cm): ";
    cin >> tinggi;

    // Mengubah tinggi cm -> meter
    tinggiMeter = tinggi / 100.0;

    // Hitung IMT
    imt = berat / (tinggiMeter * tinggiMeter);

    cout << "\n=== HASIL PERHITUNGAN IMT ===\n";
    cout << "Nama : " << nama << endl;
    cout << "Usia : " << usia << " tahun" << endl;
    cout << "IMT  : " << imt << endl;

    // Penentuan kategori IMT
    if (imt < 18.5)
    {
        cout << "Kategori : Berat badan kurang (underweight)\n";
    }
    else if (imt >= 18.5 && imt <= 24.9)
    {
        cout << "Kategori : Berat badan ideal (normal)\n";
    }
    else if (imt >= 25 && imt <= 29.9)
    {
        cout << "Kategori : Berat badan berlebih (overweight)\n";
    }
    else
    {
        cout << "Kategori : Obesitas\n";
    }

    return 0;
}
