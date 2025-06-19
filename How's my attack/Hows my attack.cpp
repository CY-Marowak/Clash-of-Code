#include <stdio.h>
#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    unordered_map<string, int> type = {
        {"Fire", 0},
        {"Water", 1},
        {"Grass", 2}
    };

    int n;
    cin >> n;
    cin.get(); //幫吃enter
    for (int i = 0; i < n; ++i)
    {
        string attack;
        getline(cin, attack);
        string defend;
        getline(cin, defend);

        int a = type[attack];
        //find out the Effective type
        int effective = (3 + (a - 1) % 3) % 3; //Beware of negative number

        //Calculate the number of Effective and Useless type
        int e = 0, u = 0;
        istringstream ss(defend);
        string token;
        while (std::getline(ss, token, '+'))
        {
            if (type[token] == effective) e++;
            else u++;
        }

        //Output the result depends on the number of Effective and Useless type
        if (e > u) cout << "Effective" << endl;
        else if (e < u) cout << "Useless" << endl;
        else cout << "Average" << endl;
    }


}
