#include <iostream>
using namespace std;


class pelajar;
class manusia
{
    public:
        void showNilaiPelajr(pelajar &x); // Method to show nilai from pelajar class    

};


class pelajar
{
    private:
        int nilai;
    public:
        pelajar() { nilai = 100; } // Constructor to initialize nilai
        friend void manusia::showNilaiPelajr(pelajar &x); // Declare showNilaiPelajr as a friend of pelajar class
};


void manusia::showNilaiPelajr(pelajar &x) {
    cout << "Nilai pelajar: " << x.nilai << endl; 
};


int main(){
    manusia budi;
    pelajar budi;
    budi.showNilaiPelajr(budi); // Call showNilaiPelajr method to show nilai from pelajar class
    return 0; // Return 0 to indicate successful completion
    
}
