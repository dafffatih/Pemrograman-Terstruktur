#include <iostream>
using namespace std;

class mahasiswa{
    public:
        string nama, npm;

        void perkenalan(){
            cout << "Nama : " << nama << endl;
            cout << "NPM : " << npm << endl;
        }
};

int main(){
    
    mahasiswa mhs;
    cin >> mhs.nama >> mhs.npm;

    mhs.perkenalan();
}