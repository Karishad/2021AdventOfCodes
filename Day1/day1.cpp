#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <array>

using namespace std;

int main()
{
    fstream fs;
    fs.open("day1.txt", fstream::out);
    int counter = 0;
    if (fs.is_open())
    {
        int previous = 0;
        int current = 0;
        while (true)
        {
            fs >> current;
            if (current > previous)
                counter++;
            if (fs.eof())
                break;
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