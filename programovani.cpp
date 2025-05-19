#include <iostream>
using namespace std;

int postava;
int zivoty = 50;
int maxZivoty = 100;
int mana = 30;
int maxMana = 50;
int utok = 10;
int zlato = 100;

void vesnice() {
    int volba;

    cout << "\nVitej ve vesnici!\n";
    cout << "Zde muzes:\n";
    cout << "1 - Doplnit zivoty (cena: 10 zlata)\n";
    cout << "2 - Vylepsit maximalni zivoty (cena: 20 zlata)\n";
    cout << "3 - Vylepsit maximalni manu/energii (cena: 20 zlata)\n";
    cout << "4 - Vylepsit utok/schopnosti (cena: 30 zlata)\n";
    cout << "5 - Odejit z vesnice\n";

    do {
        cout << "\nTvoje zlato: " << zlato << "\n";
        cout << "Zvol akci (1-5): ";
        cin >> volba;

        switch (volba) {
            case 1:
                if (zlato >= 10) {
                    zivoty = maxZivoty;
                    zlato -= 10;
                    cout << "Zivoty doplneny na maximum.\n";
                } else {
                    cout << "Nedostatek zlata.\n";
                }
                break;
            case 2:
                if (zlato >= 20) {
                    maxZivoty += 10;
                    zlato -= 20;
                    cout << "Maximalni zivoty navyseny na " << maxZivoty << ".\n";
                } else {
                    cout << "Nedostatek zlata.\n";
                }
                break;
            case 3:
                if (zlato >= 20) {
                    maxMana += 10;
                    zlato -= 20;
                    cout << "Maximalni mana navysena na " << maxMana << ".\n";
                } else {
                    cout << "Nedostatek zlata.\n";
                }
                break;
            case 4:
                if (zlato >= 30) {
                    utok += 5;
                    zlato -= 30;
                    cout << "Utok vylepsen na " << utok << ".\n";
                } else {
                    cout << "Nedostatek zlata.\n";
                }
                break;
            case 5:
                cout << "Opoustis vesnici.\n";
                break;
            default:
                cout << "Neplatna volba.\n";
                break;
        }

    } while (volba != 5);
}

int main()
{
    cout << "Mozne postavy jsou> 1 - Paladin, 2 - Lovec, 3 - Warlock\n";
    do {
        bool chyba;
        cout << "Vyber si za jakou postavu chces hrat (zadej cislo 1-3)? ";
        cin >> postava;
        chyba = (postava < 1 || postava > 3);
        if (!chyba) { break; } 
        else { cout << "Zadali jste spatnou hodnotu\n"; }
    } while (true);

    // Vstup do vesnice
    vesnice();

    return 0;
}

