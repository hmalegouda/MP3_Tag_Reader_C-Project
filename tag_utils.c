#include <stdio.h>
#include <stdlib.h>
#include "tag_utils.h"
#include "mp3tag.h"

void displayMenu() {
    printf("\n===== Hospital Management System Menu =====\n");
    printf("1. Add New Patient Record\n");
    printf("2. Search/Edit Record\n");
    printf("3. Display Patient Records\n");
    printf("4. Delete Record\n");
    printf("5. Know Patient Records\n");
    printf("6. Billing and Payments\n");
    printf("7. Department Management\n");
    printf("8. Recommendations\n");
    printf("9. Exit\n");
    printf("Enter your choice: ");
}

void handleChoice(int choice) {
    switch(choice) {
        case 1: /* addPatientRecord(); */ break;
        case 2: /* searchEditRecord(); */ break;
        case 3: /* displayPatientRecords(); */ break;
        case 4: /* deleteRecord(); */ break;
        case 5: /* knowPatientRecords(); */ break;
        case 6: /* billingAndPayments(); */ break;
        case 7: /* departmentManagement(); */ break;
        case 8: /* recommendations(); */ break;
        case 9: exit(0);
        default: printf("Invalid choice! Please try again.\n");
    }
}
