#include <iostream>
#include <iomanip>
using namespace std;

float totalPrice(float pencilPrice, float penPrice, float eraserPrice)
{

    float totalPrice = pencilPrice + pencilPrice + eraserPrice;
    float GST = totalPrice * 0.18;

    return GST + totalPrice;
}

int main()
{
    float pencilPrice;
    float penPrice;
    float eraserPrice;

    cout << "Enter Pencil Price : " << endl;
    cin >> pencilPrice;

    cout << "Enter Pen Price : " << endl;
    cin >> penPrice;

    cout << "Enter Eraser Price : " << endl;
    cin >> eraserPrice;

    cout << setprecision(5) << totalPrice(pencilPrice, pencilPrice, eraserPrice) << endl;
}