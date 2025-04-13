#include <iostream>
using namespace std;

int postava;
int main()
{

    cout << "Mozne postavy jsou> 1 - Paladin, 2 - Lovec, 3 - Warlock\n";
    do  {
      bool chyba;
      cout << "vyber si za jakou postavu chces hrat (zadej cislo 1-3)? ";
      cin >> postava;
      chyba=(postava < 1 || postava > 3);
      if  ( ! chyba ) { break; } else { cout << "Zadali jste spatnou hodnotu\n"; }
    } while ( true );

    return 0;
}

