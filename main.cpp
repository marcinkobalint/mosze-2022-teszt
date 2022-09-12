#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    //Elírás. Ide az "N_ELEMENTS" kellene.
    int *b = new int[NELEMENTS];
    //Nincs sorlezárás
    std::cout << '1-100 ertekek duplazasa'
    //Hiányos for ciklus.
    for (int i = 0;)
    {
        //0-tól 99-ig duplázunk és nem 1-től 100-ig
        b[i] = i * 2;
    }
    //Ebbe a ciklusba be sem lépünk.
    for (int i = 0; i; i++)
    {
        //Magát az értéket ki sem írjuk, és nincs sorlezárás sem.
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    //Nincs kezdőértéke a változónak.
    int atlag;
    //Pontosvessző helyett sima vessző található a lépésköz előtt.
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        //Hiányzó sorlezárás.
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
