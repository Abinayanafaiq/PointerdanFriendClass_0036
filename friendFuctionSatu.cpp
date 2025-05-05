#include <iostream>
using namespace std;

class mahasiswa {
    private:
        string nama;
    public:
        friend void setNama(mahasiswa &a, string);
};


void setNama(mahasiswa &a, string b){
    a.nama = b; // Set the name of the mahasiswa object
    cout << a.nama
}

int main(){
    mahasiswa joko;
    setNama(joko, "kairi kumar"); // Set the name of the mahasiswa object
    return 0; // Return 0 to indicate successful
}