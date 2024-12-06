#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int count = 1;
    while(count < argc)
    {
        switch(atoi(argv[count]))
        {
            case 1:
                printf("One\n");
                break;
            case 2:
                printf("Two\n");
                break;
            case 3:
                printf("Three\n");
                break;
            default:
                printf("Invalid\n");
                break;
        }
        count++;
    }
}