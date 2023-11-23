#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int jumlahMahasiswa = 10;

    string nim[jumlahMahasiswa];
    string nama[jumlahMahasiswa];
    int absen[jumlahMahasiswa];
    int tm[jumlahMahasiswa];
    int uts[jumlahMahasiswa];
    int uas[jumlahMahasiswa];
    double nilaiAkhir[jumlahMahasiswa];
    char grade[jumlahMahasiswa];

    // Input data untuk setiap mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa ke-" << i + 1 << endl;
        cout << "===================================" << endl;
        cout << "NIM    : ";
        cin >> nim[i];
        cout << "Nama   : ";
        cin.ignore();
        getline(cin, nama[i]);
        cout << "Absen  : ";
        cin >> absen[i];
        cout << "TM     : ";
        cin >> tm[i];
        cout << "UTS    : ";
        cin >> uts[i];
        cout << "UAS    : ";
        cin >> uas[i];
        cout << "===================================" << endl;

        // Hitung Nilai Akhir
        nilaiAkhir[i] = 0.1 * absen[i] + 0.2 * tm[i] + 0.3 * uts[i] + 0.4 * uas[i];

        // Hitung Grade
        if (nilaiAkhir[i] >= 80)
            grade[i] = 'A';
        else if (nilaiAkhir[i] >= 70)
            grade[i] = 'B';
        else if (nilaiAkhir[i] >= 60)
            grade[i] = 'C';
        else if (nilaiAkhir[i] >= 50)
            grade[i] = 'D';
        else
            grade[i] = 'E';
    }

    // Output header tabel
    cout << "======================================================================================================" << endl;
    cout << setw(4) << "No" << "  " << setw(10) << "NIM" << "  " << setw(20) << "Nama" << "  " << setw(5) << "Absen" << "  "
         << setw(5) << "TM" << "  " << setw(5) << "UTS" << "  " << setw(5) << "UAS" << "  " << setw(12) << "Nilai Akhir" << "  "
         << setw(5) << "Grade" << endl;
    cout << "======================================================================================================" << endl;

    // Output data semua mahasiswa dalam tabel
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << setw(4) << i + 1 << "  " << setw(10) << nim[i] << "  " << setw(20) << nama[i] << "  " << setw(5) << absen[i] << "  "
             << setw(5) << tm[i] << "  " << setw(5) << uts[i] << "  " << setw(5) << uas[i] << "  " << setw(12) << fixed << setprecision(2) << nilaiAkhir[i] << "  "
             << grade[i] << endl;
    }

    cout << "======================================================================================================" << endl;

    return 0;
}
