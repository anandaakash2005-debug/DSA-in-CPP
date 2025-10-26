#include <stdio.h>
typedef struct {
    int buses;
    int cars;
    int rickshaws;
    int total_income;
} ParkingSystem;

void display_menu() {
    printf("Car Parking System\n");
    printf("--------------------\n");
    printf("1. Park a vehicle\n");
    printf("2. View total income\n");
    printf("3. View parking status\n");
    printf("4. Exit\n");
}

void park_vehicle(ParkingSystem* system) {
    int choice;
    printf("Select the type of vehicle:\n");
    printf("1. Bus (?100)\n");
    printf("2. Car (?50)\n");
    printf("3. Rickshaw/Bike (?20)\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            system->buses++;
            system->total_income += 100;
            printf("Bus parked successfully.\n");
            break;
        case 2:
            system->cars++;
            system->total_income += 50;
            printf("Car parked successfully.\n");
            break;
        case 3:
            system->rickshaws++;
            system->total_income += 20;
            printf("Rickshaw/Bike parked successfully.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
}


void view_total_income(ParkingSystem* system) {
    printf("Total income: ?%d\n", system->total_income);
}

void view_parking_status(ParkingSystem* system) {
    printf("Parking Status:\n");
    printf("Buses: %d\n", system->buses);
    printf("Cars: %d\n", system->cars);
    printf("Rickshaws/Bikes: %d\n", system->rickshaws);
}

int main() {
    ParkingSystem system = {0, 0, 0, 0};
    int choice;

    while (1) {
        display_menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                park_vehicle(&system);
                break;
            case 2:
                view_total_income(&system);
                break;
            case 3:
                view_parking_status(&system);
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}

