#include <stdio.h>
#include "math.h"

int main(int argc, char** argv)
{
    int x = 5;
    int y = 6;
    int result = multiply(x,y);
    printf("%d * %d = %d \n", x, y, result);
    return 0;
}
