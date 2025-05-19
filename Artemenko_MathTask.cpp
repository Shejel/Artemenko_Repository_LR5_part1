#include <iostream>
#include "Artemenko_MathTask.h"

using namespace std;

int main()
{
    int NumberA = 0, NumberB = 0;
    EnterDigit(NumberA, "input height A");
    EnterDigit(NumberB, "input height B");

    int RectangleArea = CalcRectangleArea(NumberA, NumberB);
    cout << "Area of Rectangle is " << RectangleArea << endl;
}
