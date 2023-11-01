#include <stdio.h>
int main(void)
{
    while (1)
    {
        double F, PE, KE;
        int m, a, g, h, v;
        char y, z;
        printf("OYEKUNLE DANIEL OLUWASEUN\n");
        printf("MECHATRONICS ENGINEERING\n");
        printf("MTE/2021/1086\n");
        printf("\n");

        printf("          FORCE          \n");
        printf("Enter mass in kg: ");
        scanf("%d", &m);
        printf("Enter acceleration in ms^-2: ");
        scanf("%d", &a);
        printf("Force = mass * acceleration\n");
        printf("Force = %d * %d\n", m, a);
        F = m * a;
        printf("Force = %.2lf Newton\n", F);
        printf("\n");

        printf("          POTENTIAL ENERGY          \n");
        printf("Reuse the same mass? (y/n): ");
        scanf(" %c", &z);
        if (z != 'y')
        {
            printf("Enter a new mass in kg: ");
            scanf("%d", &m);
        }
        printf("Enter acceleration due to gravity, g, in ms^-2: ");
        scanf(" %d", &g);
        printf("Enter height in m: ");
        scanf(" %d", &h);
        printf("Potential Energy = mass * acceleration due to gravity * height\n");
        printf("Potential Energy = %d * %d * %d\n", m, g, h);
        PE = m * g * h;
        printf("Potential Energy = %.2lf Joules\n", PE);
        printf("\n");

        printf("          KINETIC ENERGY          \n");
        printf("Reuse the same mass? (y/n): ");
        scanf(" %c", &z);
        if (z != 'y')
        {
            printf("Enter a new mass in kg: ");
            scanf("%d", &m);
        }
        printf("Enter velocity in ms^-1: ");
        scanf("%d", &v);
        printf("Kinetic Energy = 1/2 * mass * (velocity)^2\n");
        printf("Kinetic Energy = 1/2 * %d * (%d)^2\n", m, v);
        KE = 0.5 * m * v * v;
        printf("Kinetic Energy = %.2lf Joules\n", KE);

        printf("\n");
        printf("Would you like to try again? (y/n) ");
        scanf(" %c", &y);
        if (y != 'y')
        {
            printf("Thanks!\n");
            break;
        }
        printf("\n");
    }
    return (0);
}