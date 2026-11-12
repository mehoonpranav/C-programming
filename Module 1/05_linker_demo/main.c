// Program 5 (part 1): linker demo, main file
// main.c only declares area(); the definition is in shapes.c.
// The linker joins both object files into one executable.
//
// Build:  gcc main.c shapes.c -o linker_demo

#include <stdio.h>

double area(double length, double breadth);   // declaration only

int main(void)
{
    double len = 12.5, wid = 4.0;

    printf("Rectangle %.2f x %.2f\n", len, wid);
    printf("Area = %.2f\n", area(len, wid));

    return 0;
}
