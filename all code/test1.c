#include <stdio.h>
int main()
{
    int total_population = 80000;
    int number_of_men,number_of_women,total_number_of_literate_people,total_number_of_literate_men,total_number_of_literate_women,total_number_of_illiterate_people,total_number_of_illiterate_men,total_number_of_illiterate_women;
    number_of_men=total_population*(0.52);
    number_of_women=total_population-number_of_men;
    total_number_of_literate_people=total_population*(0.48);
    total_number_of_literate_men=total_population*(0.35);
    total_number_of_literate_women=total_number_of_literate_people-total_number_of_literate_men;
    total_number_of_illiterate_people=total_population-total_number_of_literate_people;
    total_number_of_illiterate_men=number_of_men-total_number_of_literate_men;
    total_number_of_illiterate_women=number_of_women-total_number_of_literate_women;
    printf("\n number of Men are %d", number_of_men);
    printf("\n number of Women are %d", number_of_women);
    printf("\n number of Literate People are %d", total_number_of_literate_people);
    printf("\n number of Literate Men are %d", total_number_of_literate_men);
    printf("\n number of Literate Women are %d", total_number_of_literate_women);
    printf("\n number of Illiterate People are %d", total_number_of_illiterate_people);
    printf("\n number of Illiterate Men are %d", total_number_of_illiterate_men);
    printf("\n number of Illiterate Women are %d", total_number_of_illiterate_women);
    return 0;
}