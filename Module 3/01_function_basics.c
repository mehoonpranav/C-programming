// Program 31: functions and sub programming
// Taking a repeated block of work and giving it a name.

#include <stdio.h>

// declaration, so main() knows the shape before the body appears
float areaRect(float l, float b);
float areaCircle(float r);

int main(void)
{
    float length = 8.0, breadth = 5.5, radius = 3.0;

    printf("Rectangle area : %.2f\n", areaRect(length, breadth));
    printf("Circle area    : %.2f\n", areaCircle(radius));

    // the same function used again with different arguments
    printf("Small box      : %.2f\n", areaRect(2.0, 3.0));

    return 0;
}

float areaRect(float l, float b)
{
    return l * b;
}

float areaCircle(float r)
{
    return 3.14159f * r * r;
}
