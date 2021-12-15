#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <array>

using namespace std;

int main()
{
    fstream fs;
    fs.open("day1.txt");
    int counter = 0;
    if (fs.is_open())
    {
        string previous = "";
        string current = "";
        while (getline(fs, current))
        {
            if (current.compare(previous) > 0)
            {
                counter++;
            }
            previous = current;
        }
    }

    // In case fstream fails
    else
    {
        fs.close();
        cout << "day1.txt not found or file failed to open correctly." << endl;
        return -1;
    }
    cout << counter << endl;
    fs.close();
    return 0;
}