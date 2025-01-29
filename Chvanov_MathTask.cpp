#include <iostream>
#include "Chvanov_MathTask.h"

using namespace std;

int main(){
    suite s;
    // Добавляем тестовую функцию в набор
    s.push_back(CUTE(testCalcRectangleArea));
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_NegativeValue));
    // Создаем listener и runner
    ide_listener<> listener;
    makeRunner(listener)(s, "Test CalcRectangleArea");
    return 0;
}



