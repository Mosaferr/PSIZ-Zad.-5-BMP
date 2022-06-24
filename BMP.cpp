// BMP
//Grzegorz Kowalczyk, D3
// na podstawie: https://github.com/ArashPartow/bitmap

#include <iostream>
#include <vector>
#include "bitmap_image.hpp"
using namespace std;

int main()
{
    bitmap_image image("test.bmp");

    if (!image)
    {
        cout << "\n Nie znaleziono pliku obrazu: test.bmp\n Program zostaje zamkniety. \n\n";
        //system("pause"); 
        return 1;
    }
    image.invert_color_planes();
    image.save_image("negatyw.bmp");

    cout << "\n Tworzenie negatywu z obrazu bitmatowego \n";
    for (int i = 0; i < 50; i++) cout << "-";
    cout << "\n Dane pliku oryginalnego: test.bmp: \n";
    cout << "  Szerokosc obrazu : " << image.width() << endl;
    cout << "  Wysokosc obrazu: " << image.height() << endl;
    cout << "  Liczba bajtow na piksel: " << image.bytes_per_pixel() << endl << endl;
    cout << " Obraz w pliku test.bmp zostal przekonwertowany na negatyw i zapisany jako: negatyw.bmp \n";
    for (int i = 0; i < 50; i++) cout << "-";
    //system("pause");
    return 0;
}