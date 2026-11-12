// Program 5 (part 2): linker demo, definition file
// Compile separately:  gcc -c shapes.c
// The object file shapes.o holds the machine code for area().

double area(double length, double breadth)
{
    return length * breadth;
}
