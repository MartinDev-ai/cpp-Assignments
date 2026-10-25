/*MARTIN MURIMI

  CT101/G/28946/25

  WEEK 5 : TASK 1

  COMPUTER SCIENCE

  KIRINYAGA UNIVERSITY

  */
#include <iostream>
#include <cstdlib>
using namespace std;

// Main function
int main()
{
    // Declare a 1D array for weekly revenue
    double revenue[7];
    double totalRevenue = 0, averageRevenue;

    // Input revenue for seven days
    cout << "========== WEEKLY REVENUE ==========\n";

    for (int i = 0; i < 7; i++)
    {
        cout << "Enter revenue for day " << i + 1 << ": Ksh ";
        cin >> revenue[i];

        totalRevenue = totalRevenue + revenue[i];
    }

    // Calculate average daily revenue
    averageRevenue = totalRevenue / 7;

    // Display weekly revenue report
    cout << "\nTotal Weekly Revenue: Ksh " << totalRevenue << endl;
    cout << "Average Daily Revenue: Ksh " << averageRevenue << endl;

    // Declare a 2D array for one branch
    int occupancy[5][10];
    int occupied, vacant;

    // Generate random occupancy data for one branch
    srand(1);

    cout << "\n========== ONE BRANCH OCCUPANCY ==========\n";

    for (int i = 0; i < 5; i++)
    {
        occupied = 0;
        vacant = 0;

        for (int j = 0; j < 10; j++)
        {
            occupancy[i][j] = rand() % 2;

            if (occupancy[i][j] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        // Display occupancy for each floor
        cout << "Floor " << i + 1;
        cout << " - Occupied Rooms: " << occupied;
        cout << ", Vacant Rooms: " << vacant << endl;
    }

    // Declare a 3D array for three branches
    int chain[3][5][10];
    int totalOccupied = 0;

    // Generate random occupancy data for all branches
    cout << "\n========== HOTEL CHAIN OCCUPANCY ==========\n";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                chain[i][j][k] = rand() % 2;

                if (chain[i][j][k] == 1)
                {
                    totalOccupied++;
                }
            }
        }

        // Display the branch number
        cout << "Branch " << i + 1 << " occupancy data generated.\n";
    }

    // Display total occupied rooms across all branches
    cout << "\nTotal Occupied Rooms Across All Branches: ";
    cout << totalOccupied << endl;

    return 0;
}
