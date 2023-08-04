#include <iostream>

using namespace std;

struct Data {
    unsigned short dd, mm, rrrr;
};

class Pracownik {
public:
    string imie = "", nazwisko = "";
    Data data_u = { 0, 0, 0 };

    void pobierzDane(string name, string second, Data d_ur) {
        imie = name;
        nazwisko = second;
        data_u = d_ur;
    }

    void wyswietlDane() {
        cout << imie << " " << nazwisko << " " << " Data urodzenia: "
            << data_u.dd << "." << data_u.mm << "." << data_u.rrrr << endl;
    }
};

int main() {
    /*
    Data moja_data;
    moja_data.dd = 15;
    moja_data.mm = 03;
    moja_data.rrrr = 2006;
    */

    Pracownik pracownik1;
    Data data_urodzenia = { 12, 2, 1998 };
    pracownik1.pobierzDane("Jan", "Kowalski", data_urodzenia);
    pracownik1.wyswietlDane();

    return 0;
}
