#include "header.h"

void createListJadwal_103032330140(ListJadwal &L){
    (L).first = NULL;
}

adr_jadwalPenerbangan createElemenJadwal_103032330140(infotype x){
    adr_jadwalPenerbangan p = new elemenJadwal;
    info(p) = x;
    next(p) = NULL;
    return p;
}

void insertLastJadwal_103032330140(ListJadwal &L, adr_jadwalPenerbangan p){
    if ((L).first != NULL) {
        adr_jadwalPenerbangan x;
        x = (L).first;
        while (next(x) != NULL) {
            x = next(x);
        }
        next(x) = p;
    } else {
        (L).first = p;
    }
}

void ShowJadwal_103032330140(ListJadwal L){
    adr_jadwalPenerbangan p;
    p = (L).first;
    while (p != NULL){
        cout << "------------------------" << endl;
        cout << info(p).kode << endl;
        cout << info(p).jenis << endl;
        cout << info(p).tanggal << endl;
        cout << info(p).waktu << endl;
        cout << info(p).asal << endl;
        cout << info(p).tujuan << endl;
        cout << info(p).kapasitas << endl;
        cout << "------------------------" << endl;
        p = next(p);
    }
}

void deleteFirstJadwal_103032330140(ListJadwal &L, adr_jadwalPenerbangan p){
    p = (L).first;
    (L).first = next((L).first);
    p = NULL;
}

adr_jadwalPenerbangan searchJadwal_103032330140(ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalPenerbangan p;
    p = (L).first;
    while (p != NULL){
        if(info(p).asal == dari && info(p).tujuan == ke && info(p).tanggal == tanggal){
            cout << "Jadwal Terdeteksi" << endl;
            return p;
        } else {
            p = next(p);
        }
    }
    cout << "Data Tidak Terdetektsi" << endl;
}



