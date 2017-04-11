#include <iostream>
using namespace std;

int main()
{
            // parametry algorytmu
            const int hms = 10;       // harmony memory search
            const int hmcr = 0.85;    // harmony memory concideration ratio
            const int par = 0.45;     // pitch adjustment ratio
            const int variables = 2;  // liczba zmiennych

            // zakres zmienności
            int min_zmiennosci = -10;
            int max_zmiennosci = 10;

            // inicjalizacja struktur
            auto hsMemory = new double[hms][variables]();

            for (int r = 0; r < 3; r++)	// wypełnienie pamięci losowymi wartościami
            {
                for (int c = 0; c < 3; c++)
                {
                    hsMemory[r][c] = rand() % (max_zmiennosci - min_zmiennosci + 1) + min_zmiennosci;
                    cout << hsMemory[r][c] << " ";
                }
                cout << endl;
            }


        getchar();
        return 0;
}
