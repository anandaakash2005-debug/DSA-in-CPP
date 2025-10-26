#include <stdio.h>
struct ParkingSystem {
    int bus_count;
    int car_count;
    int rickshaw_count;
    int total_income;
};

void initialize(struct ParkingSystem *ps) {
    ps->bus_count = 0;
    ps->car_count = 0;
    ps->rickshaw_count = 0;
    ps->total_income = 0;
}

void parkVehicle(struct ParkingSystem *ps, int type) {
    switch (type) {
        case 1: 
            ps->bus_count++;
            ps->total_income += 100;
            printf("Bus parked. Charge: ?100\n");
            break;
        case 2: 
            ps->car_count++;
            ps->total_income += 50;
            printf("Car parked. Charge: ?50\n");
            break;
        case 3: 
            ps->rickshaw_count++;
            ps->total_income += 20;
            printf("Rickshaw/Bike parked. Charge: ?20\n");
            break;
        default:
            printf("Invalid vehicle type.\n");
    }
}

void displayStatus(struct ParkingSystem *ps) {
    printf("\nParking Status:\n");
    printf("Buses parked: %d\n", ps->bus_count);
    printf("Cars parked: %d\n", ps->car_count);
    printf("Rickshaws/Bikes parked: %d\n", ps->rickshaw_count);
    printf("Total income: ?%d\n", ps->total_income);
}

void displayMenu() {
    printf("\n--- Car Parking System ---\n");
    printf("1. Park Bus\n");
    printf("2. Park Car\n");
    printf("3. Park Rickshaw/Bike\n");
    printf("4. View Parking Status\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
}

int main() {
    struct ParkingSystem ps;
    initialize(&ps); 

    int choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the system. Thank you!\n");
            break;
        }

        switch (choice) {
            case 1:
            case 2:
            case 3:
                parkVehicle(&ps, choice);
                break;
            case 4:
                displayStatus(&ps);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
