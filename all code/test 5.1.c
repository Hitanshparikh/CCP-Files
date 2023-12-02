#include <stdio.h>
int main() {
   int quantity = 0;
   float price_per_item = 0.0;
   float total_expenses = 0.0;
   printf("Enter the quantity of item: ");
   scanf("%d", &quantity);
   printf("Enter the price per item: ");
   scanf("%f", &price_per_item);
   total_expenses = (quantity * price_per_item);
   if (quantity >= 1000) {
       total_expenses *= 0.9;
   }
   printf("Total expenses: %.2f\n", total_expenses);
   return 0;}
