#include <stdio.h>
#define TOLL_RATE 50

void processVehicle(char vehicleType[]){
    static int totalVehicles = 0;
    static int totalRevenue = 0;
    totalVehicles++;
    totalRevenue = totalRevenue + Toll_Rate;
    printf("Vehicle Type: %s\n", vehicleType);
    printf("Toll Charged: %d PKR\n\n", Toll_Rate);
    printf("Total Vehicles: %d\n", totalVehicles);
    printf("Total Revenue: %d PKR\n\n", totalRevenue);
}

int main(){
    processVehicle("Car");
    processVehicle("Bus");
    processVehicle("Bike");
    processVehicle("Car");
    return 0;
}
