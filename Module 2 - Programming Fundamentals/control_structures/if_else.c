#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int x = 1;
    int y = 2;
    if ((atoi)(argv[x]) > (atoi)(argv[y]))
    {
        printf("First number is greater than the secound \n");
    }
    else {
        printf("Second number is greater than first \n");
    }

    return 0;
}