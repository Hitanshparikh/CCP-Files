#include <stdio.h>

int main()
{
    float basicSalary = 0;
    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    float da, hra, ma, ta;
    da = basicSalary * (0.7);
    hra = basicSalary * (0.07);
    ma = basicSalary * (0.02);
    ta = basicSalary * (0.04);

    float pf, it;
    pf = basicSalary * (0.12);
    it = 500;

    float grossSalary, netSalary, allowances, deductions;
    allowances = da + hra + ma + ta;
    deductions = pf + it;
    grossSalary = basicSalary + allowances;
    netSalary = grossSalary - deductions;

    printf("Sr. No.\t\tInputs/Outputs \t\tAmount \n");
    printf("1\t\tBasic Salary \t\t%f \n", basicSalary);
    printf("1\t\tDA of Basic Salary \t%f \n", da);
    printf("1\t\tHRA of Basic Salary \t%f \n", hra);
    printf("1\t\tMA of Basic Salary \t%f \n", ma);
    printf("1\t\tTA of Basic Salary \t%f \n", ta);
    printf("1\t\tPF of Basic Salary \t%f \n", pf);
    printf("1\t\tGross Salary \t\t%.2f \n", grossSalary);
    printf("1\t\tNet Salary \t\t%.0f \n", netSalary);

    return 0;
}
