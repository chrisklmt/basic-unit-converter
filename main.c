#include <stdio.h>
#include <stdlib.h>

void convertTemperature() {
    int choice;
    double value, result;
    
    printf("Επιλέξτε μετατροπή θερμοκρασίας:\n");
    printf("1. Celsius σε Fahrenheit\n");
    printf("2. Fahrenheit σε Celsius\n");
    printf("Επιλογή (1 ή 2): ");
    if (scanf("%d", &choice) != 1) {
        printf("Μη έγκυρη επιλογή!\n");
        return;
    }
    
    printf("Εισάγετε την τιμή: ");
    if (scanf("%lf", &value) != 1) {
        printf("Μη έγκυρη τιμή!\n");
        return;
    }
    
    if (choice == 1) {
        result = value * 9.0 / 5.0 + 32;
        printf("%.2lf °C ισούται με %.2lf °F\n", value, result);
    } else if (choice == 2) {
        result = (value - 32) * 5.0 / 9.0;
        printf("%.2lf °F ισούται με %.2lf °C\n", value, result);
    } else {
        printf("Μη έγκυρη επιλογή!\n");
    }
}

void convertCurrency() {
    int choice;
    double value, result;
    
    printf("Επιλέξτε μετατροπή συναλλάγματος:\n");
    printf("1. EUR σε USD\n");
    printf("2. EUR σε GBP\n");
    printf("3. EUR σε CNY\n");
    printf("Επιλογή (1, 2 ή 3): ");
    if (scanf("%d", &choice) != 1) {
        printf("Μη έγκυρη επιλογή!\n");
        return;
    }
    
    printf("Εισάγετε την ποσότητα σε EUR: ");
    if (scanf("%lf", &value) != 1) {
        printf("Μη έγκυρη τιμή!\n");
        return;
    }
    
    if (choice == 1) {
        // Υποθέτουμε ισοτιμία 1 EUR = 1.07 USD
        result = value * 1.07;
        printf("%.2lf EUR ισούται με %.2lf USD\n", value, result);
    } else if (choice == 2) {
        // Υποθέτουμε ισοτιμία 1 EUR = 0.88 GBP
        result = value * 0.88;
        printf("%.2lf EUR ισούται με %.2lf GBP\n", value, result);
    } else if (choice == 3) {
        // Υποθέτουμε ισοτιμία 1 EUR = 7.6 CNY
        result = value * 7.6;
        printf("%.2lf EUR ισούται με %.2lf CNY\n", value, result);
    } else {
        printf("Μη έγκυρη επιλογή!\n");
    }
}

void convertMass() {
    int choice;
    double value, result;
    
    printf("Επιλέξτε μετατροπή μάζας:\n");
    printf("1. Kg σε lb (pounds)\n");
    printf("2. Gr σε oz (ounces)\n");
    printf("Επιλογή (1 ή 2): ");
    if (scanf("%d", &choice) != 1) {
        printf("Μη έγκυρη επιλογή!\n");
        return;
    }
    
    printf("Εισάγετε την τιμή: ");
    if (scanf("%lf", &value) != 1) {
        printf("Μη έγκυρη τιμή!\n");
        return;
    }
    
    if (choice == 1) {
        result = value * 2.20462;
        printf("%.2lf Kg ισούται με %.2lf lb\n", value, result);
    } else if (choice == 2) {
        result = value * 0.035274;
        printf("%.2lf Gr ισούται με %.2lf oz\n", value, result);
    } else {
        printf("Μη έγκυρη επιλογή!\n");
    }
}

int main() {
    char option;
    
    printf("Καλώς ήρθατε στον Μετατροπέα Βασικών Μονάδων Μέτρησης!\n");
    printf("Διαθέσιμες επιλογές:\n");
    printf("T: Temperature (Θερμοκρασία)\n");
    printf("C: Currency (Συναλλάγμα)\n");
    printf("M: Mass (Μάζα)\n");
    printf("Επιλέξτε ένα από τα T, C ή M: ");
    
    // Χρήση " %c" για παράκαμψη τυχόν λευκών χαρακτήρων
    scanf(" %c", &option);
    
    if (option == 'T' || option == 't') {
        convertTemperature();
    } else if (option == 'C' || option == 'c') {
        convertCurrency();
    } else if (option == 'M' || option == 'm') {
        convertMass();
    } else {
        printf("Μη έγκυρη επιλογή!\n");
    }
    
    printf("Ο μετατροπέας τερματίζεται. Ευχαριστούμε για τη χρήση της εφαρμογής!\n");
    return 0;
}
