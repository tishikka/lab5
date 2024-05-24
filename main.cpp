#include <iostream>
#include <cmath>
#include "stack.h"

int main() {
    setlocale(LC_ALL, "russian");
    int x, y;
    std::cin >> x >> y;
    try{
        mult(x,y);
    }
    catch (int x){
        std::cout << "Div by 0.";
    }
    catch (double x){
        std::cout << "Val is double, not int.";
    }
}