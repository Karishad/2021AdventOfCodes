#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    fstream fs;
    fs.open("day1.txt", fstream::out);
    if (fs.is_open())
    {
    }
    else
    {
        fs.close();
        cout << "day1.txt not found or file failed to open correctly." << endl;
        return -1;
    }

    fs.close();
    return 0;
}