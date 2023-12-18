#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main()
{

    ifstream file("input.txt");
    if (!file.is_open())
    {
        cerr << "Error opening the file!" << endl;
        return 1;
    }
    string line;
    vector<int> numbers;
    while (getline(file, line))
    {
        // line is the string that we want
        istringstream iss(line);
        int num;
        while (iss >> num)
        {
            // process integer
            numbers.push_back(num);
        }
    }

    for (int n : numbers) {
        cout << n << " ";
    }

    file.close();

    return 0;
}