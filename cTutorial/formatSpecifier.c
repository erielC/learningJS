#include <stdio.h>

int main(){
    // %1 = minimum field width ex. %    5.65 
    // %- = left align


    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 100.99;

    printf("Item 1: $%5.2f\n", item1);
    printf("Item 2: $%.2f\n", item2);
    printf("Item 3: $%.2f\n", item3);

    return 0;

}