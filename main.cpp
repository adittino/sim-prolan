#include <iostream>
#include <vector>

#include "person.cpp"
#include "mahasiswa.cpp"
#include "dosen.cpp"
#include "tendik.cpp"

using namespace std;

int main(int argc, char** argv)
{
    vector<mahasiswa> recMhs;
    vector<dosen> recDosen;
    vector<tendik> recTendik;

    int menu_terpilih;

    while (1) {
        cout << "Selamat datang di Universitas X" << endl << endl;
        cout << "Data statistik:" << endl;
        cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
        cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
        cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tendik" << endl;
        cout << endl;
        cout << "Menu: " << endl;
        cout << "  1. Tambah Mahasiswa" << endl;
        cout << "  2. Tambah Dosen" << endl;
        cout << "  3. Tambah Tenaga Kependidikan" << endl;
        cout << "  4. Tampilkan semua Mahasiswa" << endl;
        cout << "  5. Tampilkan semua Dosen" << endl;
        cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
        cout << "-> Silahkan memilih salah satu: ";
        cin >> menu_terpilih;

        string id, nama;
        int dd, mm, yy;

        switch (menu_terpilih) {
        case 1:
        {
            string nrp, departemen;
            int tahunmasuk;
            cout << "Masukkan data mahasiswa: " << endl;
            cout << "Id: ";
            cin >> id;
            cout << "Nama: ";
            cin >> nama;
            cout << "Tanggal lahir: ";
            cin >> dd;
            cout << "Bulan lahir: ";
            cin >> mm;
            cout << "Tahun lahir: ";
            cin >> yy;
            cout << "NRP: ";
            cin >> nrp;
            cout << "Departemen: ";
            cin >> departemen;
            cout << "Tahun masuk: ";
            cin >> tahunmasuk;
            mahasiswa mhs(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
            recMhs.push_back(mhs);
            break;
        }
        case 2:
        {
            string npp, departemen;
            int pendidikan;
            cout << "Masukkan data mahasiswa: " << endl;
            cout << "Id: ";
            cin >> id;
            cout << "Nama: ";
            cin >> nama;
            cout << "Tanggal lahir: ";
            cin >> dd;
            cout << "Bulan lahir: ";
            cin >> mm;
            cout << "Tahun lahir: ";
            cin >> yy;
            cout << "NPP: ";
            cin >> npp;
            cout << "Departemen: ";
            cin >> departemen;
            cout << "Pendidikan: ";
            cin >> pendidikan;
            dosen dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
            recDosen.push_back(dosen);
            break;
        }
        case 3:
        {
            string npp, unit;
            int pendidikan;
            cout << "Masukkan data mahasiswa: " << endl;
            cout << "Id: ";
            cin >> id;
            cout << "Nama: ";
            cin >> nama;
            cout << "Tanggal lahir: ";
            cin >> dd;
            cout << "Bulan lahir: ";
            cin >> mm;
            cout << "Tahun lahir: ";
            cin >> yy;
            cout << "NPP: ";
            cin >> npp;
            cout << "Unit: ";
            cin >> unit;
            tendik tendik(id, nama, dd, mm, yy, npp, unit);
            recTendik.push_back(tendik);
            break;
        }
        case 4:
            cout << "Daftar Mahasiswa:\n";
            cout << "ID\t" << "|" << "Nama\t\t\t\t" << "|\n";
            for (int i = 0; i < recMhs.size(); i++) {
                cout << recMhs.at(i).getId() << "\t " << recMhs.at(i).getNama() << endl;
            }
            break;
        case 5:
            cout << "Daftar Dosen:\n";
            cout << "ID\t" << "|" << "Nama\t\t\t\t" << "|\n";
            for (int i = 0; i < recDosen.size(); i++) {
                cout << recDosen.at(i).getId() << "\t " << recDosen.at(i).getNama() << endl;
            }
            break;
        case 6:
            cout << "Daftar Tenaga Kependidikan:\n";
            cout << "ID\t" << "|" << "Nama\t\t\t\t" << "|\n";
            for (int i = 0; i < recTendik.size(); i++) {
                cout << recTendik.at(i).getId() << "\t " << recTendik.at(i).getNama() << endl;
            }
            break;
        }
    }

    return 0;
}
