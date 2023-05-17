#include <stdio.h>

int main() {
    // Distance
    double distance = 400.0;

    // Average fuel consumption in km/liter
    double fuelConsumption = 18.0;

    // Initial fuel level in liters
    double initialFuel = 15.0;
    
    double fuelRequired = distance / fuelConsumption;
    if (initialFuel >= fuelRequired) {
        
        double time = distance / fuelConsumption;

        printf("The minimum time to travel %.2f km is %.2f hours.\n", distance, time);
    } else {

        double firstLegDistance = initialFuel * fuelConsumption;
        double secondLegDistance = distance - firstLegDistance;
        double time = (firstLegDistance / fuelConsumption) + (secondLegDistance / fuelConsumption);
        printf("The minimum time to travel %.2f km is %.2f hours.\n", distance, time);
    }
    return 0;
}
