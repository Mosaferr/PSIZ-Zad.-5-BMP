// BER
//Grzegorz Kowalczyk, D3

#include <iostream>
#include "bitmap_image.hpp"
using namespace std;

int main()
{
    bitmap_image image("test.bmp");

    if (!image)
    {
        cout << "\n Nie znaleziono pliku obrazu: test.bmp\n Program zostaje zamkniety. \n";
        return 1;
    }

    cout << "----------------------------\n";
    cout << " Dane pliku z grafika bitmatowa: test.bmp: \n";
    cout << "  Szerokosc obrazu : " << image.width() << endl;
    cout << "  Wysokosc obrazu: " << image.height() << endl;
    cout << "  Liczba bajtow na piksel: " << image.bytes_per_pixel() << endl;
    cout << "----------------------------\n";
    return 0;
}