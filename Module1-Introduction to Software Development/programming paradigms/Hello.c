#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int a, int b){
int sum = a + b;
return sum;
}
int main(){
    printf("Hello World!\n");
    printf("The sum is %d\n", add(5, 3));
    return 0;
}