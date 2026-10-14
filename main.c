#include <stdio.h>
#include <stdbool.h>

int main() {

    printf("=== Mass-Weight Converter | Coded by @justpixel.code on TikTok ===\n");
    printf("NOTE: The mass is multiplied by 9.8, as it is on Earth.\n");

    float mass;
    char choice;

    while (true) {
        
    printf("Enter the mass in kg: ");
    scanf("%f", &mass);

    float kg = mass * 9.8;

    printf("The weight on earth is: %2.f N(Newtons)\n", kg);

    printf("Run again? (y/n): ");
    scanf(" %c", &choice);

    if (choice == 'n' || choice == 'N') {
        break;
    }
    else if (choice == 'y' || choice == 'Y') {
        continue;
    }
    else {
        printf("Invalid input. Please enter 'y' or 'n'.\n");
    }

    }

    return 0;

}
