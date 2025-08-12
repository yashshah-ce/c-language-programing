#include <stdio.h>

int main()
{
    float length, breadth;
    float area, perimeter;
    float fenceRate, grassRate, fencingCost, grassCost;

    printf("Enter length of park (in meters): ");
    scanf("%f", &length);
    printf("Enter breadth of park (in meters): ");
    scanf("%f", &breadth);

    if (length <= 0 || breadth <= 0)
    {
        printf("Error: Dimensions must be positive values.\n");
        return 1; // Exit program
    }
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    printf("\n--- Park Measurements ---\n");
    printf("Length      : %.2f meters\n", length);
    printf("Breadth     : %.2f meters\n", breadth);
    printf("Area        : %.2f sq. meters\n", area);
    printf("Perimeter   : %.2f meters\n", perimeter);

    printf("\nEnter fencing cost per meter: ");
    scanf("%f", &fenceRate);
    printf("Enter grass laying cost per sq. meter: ");
    scanf("%f", &grassRate);

    fencingCost = perimeter * fenceRate;
    grassCost = area * grassRate;

    printf("\n--- Cost Calculations ---\n");
    printf("Fencing Cost  : Rs. %.2f\n", fencingCost);
    printf("Grass Cost    : Rs. %.2f\n", grassCost);

    return 0;
}
