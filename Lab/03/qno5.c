int main() {
    
    int distSouth1 = 10;
    int distWest = 10;
    int distSouth2 = 5;
    int distNorth = 15;

    float fuelconsumption = 2;
    int totaldist = distSouth1 + distWest + distSouth2 + distNorth;
    float fuelconsumed = totaldist * fuelconsumption;

    printf("Total distance covered: %d km\n", totaldist);
    printf("Fuel consumed: %lf liters\n", fuelconsumed);

    return 0;
}
