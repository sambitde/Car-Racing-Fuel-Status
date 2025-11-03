#include <stdio.h> 
void analyzeFuel(int laps, double fuel, char mode); 
int main() { 
int laps; 
double fuel; 
char mode, choice; // To store user's inputs                              
printf("\n🏁 Car Racing - Fuel Status System 🏁 \n");
 printf("--------------------------------------\n"); 
do { 
printf("\nEnter laps remaining: "); 
scanf("%d", &laps); 
printf("Enter current fuel (in Litres): "); 
scanf("%lf", &fuel); 
printf("Enter driving mode (A=Aggressive, N=Normal, C=Conserve): ");
 scanf(" %c", &mode); 
printf("\nAnalyzing fuel and mode"); 
for (int i = 0; i < 3; i++) { 
printf("."); 
} 
printf("\n\n"); 
analyzeFuel(laps, fuel, mode); 
printf("\nDo you want to check another scenario? (Y/N): "); 
scanf(" %c", &choice); 
} while (choice == 'Y' || choice == 'y'); 
printf("\n🏁 Thank you for using the Fuel Status System! 🏁 \n"); 
return 0; 
} 
void analyzeFuel(int laps, double fuel, char mode) { 
double consumption_per_lap; 
double laps_possible; 
if (mode == 'A' || mode == 'a') { 
consumption_per_lap = 2.6; // High consumption 
laps_possible = fuel / consumption_per_lap; 
printf("Mode: Aggressive (%.1f L/lap)\n", consumption_per_lap); 
printf("Laps possible with current fuel: %.1f\n", laps_possible); 
if (laps_possible >= laps) { 
printf("✅ Decision: You can finish the race, but the margin is tight!\n"); 
} else { 
printf("🚫 Decision: You CANNOT finish. You must pit for fuel.\n"); 
} 
} else if (mode == 'N' || mode == 'n') { 
consumption_per_lap = 2.0; // Normal consumption 
laps_possible = fuel / consumption_per_lap; 
printf("Mode: Normal (%.1f L/lap)\n", consumption_per_lap); 
printf("Laps possible with current fuel: %.1f\n", laps_possible); 
if (laps_possible >= laps) { 
printf("✅ Decision: You can finish the race without pitting.\n"); 
} else { 
printf("🚫 Decision: You CANNOT finish. You must pit for fuel.\n"); 
} 
} else if (mode == 'C' || mode == 'c') { 
consumption_per_lap = 1.6; // Low consumption 
laps_possible = fuel / consumption_per_lap; 
printf("Mode: Conserve (%.1f L/lap)\n", consumption_per_lap); 
printf("Laps possible with current fuel: %.1f\n", laps_possible); 
if (laps_possible >= laps) { 
printf("✅ Decision: You can easily finish the race.\n"); 
if (laps_possible > laps + 3) { 
printf("   Info: You have more than 3 extra laps of fuel.\n"); 
} 
} else { 
printf("🚫 Decision: You CANNOT finish, even in conserve mode.\n"); 
} 
} else { 
printf("❌ Invalid input. Please enter only A, N, or C.\n"); 
} 
}
