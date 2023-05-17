int main() {
    // Distance in kilometers
    double distance = 100.0;
    double fuelConsumption = 18.0;
    double initialFuel = 15.0;
    double fuelRequired = distance / fuelConsumption;
    if (initialFuel >= fuelRequired) {
        double time = distance / fuelConsumption;

        printf("The minimum time to travel %.2f km is %.2f hours.\n", distance, time);
    } else {
        printf("Insufficient fuel to complete the journey.\n");
    }

    return 0;
}