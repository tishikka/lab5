#include <iostream>
#include <cmath>
#include "stack.h"

int mult(int x, int y){
    div1(x, y+1);
    return x*y;
}

int div1(int x, int y){
    div2(x, y-1);
    if (y!=0){
        if ((int)x%(int)y==0){
            return x/y;
        }
        else{
            throw (double)x/(double)y;
        }
    }
    else{
        throw 0;
    }
}
int div2(int x, int y){
    sub(x,y);
    if (y!=0){
        return x/y;
    }
    else{
        throw 0;
    }
}
int sub(int x, int y){
    div3(x,y+6);
    return x-y;
}
int div3(int x, int y){
    if (x%y==0){
        return x/y;
    }
    else throw (double)x/(double)y;
}