#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <array>

using namespace std;

int main()
{
    fstream fs;
    fs.open("day2.txt");
    int depth = 0;   // Up/Down
    int forward = 0; // Forward
    if (fs.is_open())
    {
        string currentline = "";
        string delimiter = " "; // Just to make sure that it is stated that space is the delimiter
        string firstpart = "";
        string numberpart = "";
        int changednumberpart = 0;
        int space = 0;
        while (getline(fs, currentline))
        {
            space = currentline.find(delimiter);
            firstpart = currentline.substr(0, space);                           // This will read in the Up/Down/Forward
            numberpart = currentline.substr(space + 1, currentline.size() - 1); // This will read in the number
            changednumberpart = stoi(numberpart);
            if (firstpart.compare("forward") == 0)
            {
                forward += changednumberpart;
            }
            else if (firstpart.compare("down") == 0)
            {
                depth += changednumberpart;
            }
            else if (firstpart.compare("up") == 0)
            {
                depth -= changednumberpart;
            }
            // break;
        }
        // cout << space << " " << firstpart << " " << numberpart << endl;
        // cout << changednumberpart << endl;
        cout << depth << " " << forward << endl;
    }

    else
    {
        fs.close();
        cout << "day2.txt not found or file failed to open correctly." << endl;
        return -1;
    }
    return 0;
}