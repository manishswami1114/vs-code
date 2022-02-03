
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
ifstream input;
ofstream output;
string filename;

int value, total = 0;

cout << "write the file name here" <<endl;
cin >> filename;

input.open(filename.c_str());

if(input)
    while(!input.eof())
    {
        int count = 0;
    std::string line;
    std::ifstream file("main.cpp");
 
    while (getline(file, line))
    {
        for (int i = 0; i < line.length(); i++)
        {
            if (line[i] == ' ' || line[i] == '\t')
                count++;
        }
    }
    std::cout << "Number of white-space characters"
              << " is " << count << "\n.";
    return 0;
    

    }


}