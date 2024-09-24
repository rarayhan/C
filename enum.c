#include<stdio.h>
enum colorRGB {

RED,
GREEN,
BLUE
};
int main(){

enum colorRGB red = RED;
enum colorRGB blue = BLUE;
enum colorRGB green = GREEN;



printf("The value of red = %d\n", red);
printf("The value of green = %d\n", green);
printf("The value of blue = %d\n", blue);
}
