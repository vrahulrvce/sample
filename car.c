#include <stdio.h>

int main() {
    double distance = 400; // Distance in kilometers
    double averageFuelEfficiency = 18; // Average fuel efficiency in km per liter

    double fuelConsumed = distance / averageFuelEfficiency; // Fuel consumed in liters

    printf("Fuel consumed: %.2f liters\n", fuelConsumed);

    return 0;
}