#include "peta.h"
// Petunjuk: Elemen pada double pointer dapat diakses seperti array biasa.
// Misalkan ingin mengakses elemen baris i kolom j, maka cukup buat matrix[i][j]

char** BuatPeta(int n_peta){
    // Buat baris yang berisi pointer ke elemen masing-masing baris
    char** peta = new char*[n_peta];
    // Isi masing-masing baris dengan elemen kolom
    for(int i=0; i<n_peta; i++){
        peta[i] = new char[n_peta];
    } 
    // Isikan elemen ke peta untuk pertama kalinya
    // Silahkan tuliskan implementasi
    for(int i=0;i<n_peta;i++){
        for(int j=0;j<n_peta;j++){
            if (i==0||j==0||i==(n_peta-1)||j==(n_peta-1)){
                peta[i][j]='x';
            }
            else{
                peta[i][j]='-';
            }
        }
    }

    return peta;
}

void PrintPeta(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari sisi Depan" << endl;
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari sisi depan
    for (int i=0;i<n_peta;i++){
        for (int j=0;j<n_peta;j++){
            cout<<peta[i][j];
            if (j!=(n_peta - 1)){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void PrintViewKanan(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari sisi Kanan" << endl;
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari sisi kanan
    for (int i=0;i<n_peta;i++){
        for (int j=0;j<n_peta;j++){
            cout<<peta[n_peta-1-j][i];
            if (j!=(n_peta - 1)){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void PrintViewKiri(char** peta, int n_peta){
    cout << "Tampilan Peta Dilihat dari sisi Kiri" << endl;
    // Tuliskan implementasi untuk menampilkan peta apabila dilihat dari sisi kiri
    for (int i=0;i<n_peta;i++){
        for (int j=0;j<n_peta;j++){
            cout<<peta[j][n_peta-1-i];
            if (j!=(n_peta - 1)){
                cout<<" ";
            }
        }
        cout<<endl;
    }
}