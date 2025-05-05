#include <iostream>
#include <string>

using namespace std;

class siswa;
class orang;
{
    private:
        string nama;
    public:
        void setNama(string pNama);
        friend class siswa; // Declare class siswa as a friend of class orang
};