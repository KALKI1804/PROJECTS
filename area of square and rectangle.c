#include <stdio.h>
int main(){
    float s;
    // SQUARE
    printf("lets find the area and perimeter of a square : \n");
    printf("side of the square: ");
    scanf("%f",&s);
    printf("\n Area of a SQUARE is: %2f",s*s);
    printf("\n Perimeter of a SQUARE: %2f",4*s);
    return 0;
}