#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string text[4];

    for(int i = 0; i < 4; i++)
    {
        cin >> text[i];
    }

    ofstream writeFile("barang.txt");

    for (int i = 0; i < 4; i++)
    {
        writeFile << text[i] << "\n";
    }
}