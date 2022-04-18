#include "objek.h"

void TambahKorban(char** peta, string nama, int x, int y, korban* korban_baru){
    // Tuliskan implementasi untuk mengubah data korban baru dan mengubah simbol pada peta
    korban_baru->x=x;
    korban_baru->y=y;
    korban_baru->nama=nama;
    korban_baru->simbol = nama[0];
    peta[korban_baru->x][korban_baru->y]=korban_baru->simbol;
}

void TambahLilin(char** peta, int x, int y, lilin* lilin_baru){
    // Tuliskan implementasi untuk mengubah data lilin baru dan mengubah simbol pada peta
    lilin_baru->nyala=on;
    lilin_baru->x=x;
    lilin_baru->y=y;
    peta[lilin_baru->x][lilin_baru->y]=lilin_baru->simbol;
}