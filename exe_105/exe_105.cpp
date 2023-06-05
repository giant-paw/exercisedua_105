#include <iostream>
using namespace std;

class Penerbit {
private:
    string namaPenerbit;

public:
    Penerbit(const string& nama) : namaPenerbit(nama) {}

    string getNamaPenerbit() const {
        return namaPenerbit;
    }
};

class Pengarang {
private:
    string namaPengarang;

public:
    Pengarang(const string& nama) : namaPengarang(nama) {}

    string getNamaPengarang() const {
        return namaPengarang;
    }
};

class Buku {
private:
    string judulBuku;

public:
    Buku(const string& judul) : judulBuku(judul) {}

    string getJudulBuku() const {
        return judulBuku;
    }
};

int main() {
    Penerbit gamaPress("Gama Press");
    Penerbit intanPariwara("Intan Pariwara");

    Pengarang joko("joko");
    Pengarang lia("lia");
    Pengarang giga("Giga");
    Pengarang asroni("Asroni");

    Buku fisika("Fisika");
    Buku algoritma("Algoritma");
    Buku basisdata("Basisdata");
    Buku dasarPemrograman("Dasar Pemrograman");
    Buku matematika("Matematika");
    Buku multimedia1("Multimedia 1");

    Pengarang daftarPengarangGamaPress[] = { joko, lia, giga };
    Pengarang daftarPengarangIntanPariwara[] = { asroni, giga };
    Penerbit daftarPenerbitDiikutiGiga[] = { gamaPress, intanPariwara };

    cout << "Daftar pengarang di penerbit GAMA PRESS : " << endl;
    for (const Pengarang& pengarang : daftarPengarangGamaPress) {
        cout << pengarang.getNamaPengarang() << endl;
    }

    cout << "\n\n";

    cout << "Daftar pengarang di penerbit INTAN PARIWARA: " << endl;
    for (const Pengarang& pengarang : daftarPengarangIntanPariwara) {
        cout << pengarang.getNamaPengarang() << endl;
    }

    cout << "\n\n";

    cout << "Daftar penerbit yang diikuti oleh Giga : " << endl;
    for (const Penerbit& penerbit : daftarPenerbitDiikutiGiga) {
        cout << penerbit.getNamaPenerbit() << endl;
    }

    cout << "\n\n";

    cout << "Daftar buku yang dikarang oleh Joko : " << endl;
    cout << fisika.getJudulBuku() << endl;
    cout << algoritma.getJudulBuku() << endl;

    cout << "\n\n";

    cout << "Daftar buku yang dikarang oleh Lia : " << endl;
    cout << basisdata.getJudulBuku() << endl;

    cout << "\n\n";

    cout << "Daftar buku yang dikarang oleh Asroni : " << endl;
    cout << dasarPemrograman.getJudulBuku() << endl;

    cout << "\n\n";

    cout << "Daftar buku yang dikarang oleh Giga : " << endl;
    cout << matematika.getJudulBuku() << endl;
    cout << multimedia1.getJudulBuku() << endl;

    return 0;
}