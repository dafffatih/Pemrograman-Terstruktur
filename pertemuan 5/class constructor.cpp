#include <iostream>
using namespace std;

class mahasiswa{
    public:
        string nama, npm;

        mahasiswa(string nama, string b){
            this->nama = nama;
            npm = b;
        }
};

int main(){
    
    mahasiswa mhs("daffa", "123");

    cout << "Nama : " << mhs.nama << endl;
    cout << "NPM : " << mhs.npm << endl;
}