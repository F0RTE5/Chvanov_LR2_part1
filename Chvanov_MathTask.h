#ifndef _CHVANOV_MATHTASK_H
#define _CHVANOV_MATHTASK_H

#include <cstring>
using namespace std;

//проверка корректности вводимых данных
bool UserInput(string input) {
    if (input.empty()) return false;
    try {
        int number = stoi(input);
    }
    catch (...) //если возникла ошибка в блоке try
    { return false; }
    return true;
}
//вычисление площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB){
    return NumberA * NumberB;
}
#endif
