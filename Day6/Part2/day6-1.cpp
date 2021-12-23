#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main()
{
    // Inital values from day6.txt
    vector<int> lanternfish = {1, 3, 4, 1, 5, 2, 1, 1, 1, 1, 5, 1, 5, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 1, 2, 1, 5, 1, 1, 1, 1, 1, 4, 4, 1, 1, 4, 1, 1, 2, 3, 1, 5, 1, 4, 1, 2, 4, 1, 1, 1, 1, 1, 1, 1, 1, 2, 5, 3, 3, 5, 1, 1, 1, 1, 4, 1, 1, 3, 1, 1, 1, 2, 3, 4, 1, 1, 5, 1, 1, 1, 1, 1, 2, 1, 3, 1, 3, 1, 2, 5, 1, 1, 1, 1, 5, 1, 5, 5, 1, 1, 1, 1, 3, 4, 4, 4, 1, 5, 1, 1, 4, 4, 1, 1, 1, 1, 3, 1, 1, 1, 1, 1, 1, 3, 2, 1, 4, 1, 1, 4, 1, 5, 5, 1, 2, 2, 1, 5, 4, 2, 1, 1, 5, 1, 5, 1, 3, 1, 1, 1, 1, 1, 4, 1, 2, 1, 1, 5, 1, 1, 4, 1, 4, 5, 3, 5, 5, 1, 2, 1, 1, 1, 1, 1, 3, 5, 1, 2, 1, 2, 1, 3, 1, 1, 1, 1, 1, 4, 5, 4, 1, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 1, 1, 5, 1, 1, 4, 1, 5, 2, 4, 1, 1, 1, 2, 1, 1, 4, 4, 1, 2, 1, 1, 1, 1, 5, 3, 1, 1, 1, 1, 4, 1, 4, 1, 1, 1, 1, 1, 1, 3, 1, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 1, 1, 1, 1, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 1, 1, 2, 5, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    // We are solving for 80 iterations
    int tempsize = 0;
    for (int i = 0; i < 256; i++)
    {
        tempsize = lanternfish.size();
        for (int k = 0; k < tempsize; k++)
        {
            if (lanternfish[k] == 0)
            {
                lanternfish[k] = 6;
                lanternfish.push_back(8);
            }
            else
            {
                lanternfish[k] = lanternfish[k] - 1;
            }
        }
        cout << i << " " << tempsize << endl;
    }
    cout << lanternfish.size() << endl;
    return 0;
}