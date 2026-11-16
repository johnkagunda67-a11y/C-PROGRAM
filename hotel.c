// HOTEL MANAGEMENT SYSTEM IN C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DAYS 7
#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main()
{
    double revenue[DAYS], total = 0;
    int occupancy[FLOORS][ROOMS];
    int chain[BRANCHES][FLOORS][ROOMS];
    int b, f, r, d, occupied, totalOccupied = 0;

    srand(time(NULL));

    /* ---- 1D array: weekly revenue ---- */
    for (d = 0; d < DAYS; d++)
    {
        printf("Enter revenue for day %d: ", d + 1);
        scanf("%lf", &revenue[d]);
        total += revenue[d];
    }
    printf("Total weekly revenue : %.2f\n", total);
    printf("Average daily revenue: %.2f\n", total / DAYS);

    /* ---- 2D array: one branch occupancy (simulated, 1 = occupied) ---- */
    printf("Room occupancy (one branch):\n");
    for (f = 0; f < FLOORS; f++)
    {
        occupied = 0;
        for (r = 0; r < ROOMS; r++)
        {
            occupancy[f][r] = rand() % 2;
            occupied += occupancy[f][r];
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               f + 1, occupied, ROOMS - occupied);
    }

    /* ---- 3D array: 3 branches ---- */
    for (b = 0; b < BRANCHES; b++)
        for (f = 0; f < FLOORS; f++)
            for (r = 0; r < ROOMS; r++)
            {
                chain[b][f][r] = rand() % 2;
                totalOccupied += chain[b][f][r];
            }
    printf("Total occupied rooms across all branches: %d of %d\n",
           totalOccupied, BRANCHES * FLOORS * ROOMS);
    return 0;
}
