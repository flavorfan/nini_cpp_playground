#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{
    char s1[9], s2[9], c[100];
    int len = 0;
    cin.getline(c, 100);
    len = atoi(c);

    for (int i = 0; i < len; i++)
    {
        cin >> s1 >> s2;
        if ((strcmp(s1, "Rock") == 0 && strcmp(s2, "Paper") == 0) ||
            (strcmp(s1, "Paper") == 0 && strcmp(s2, "Scissors") == 0) ||
            (strcmp(s1, "Scissors") == 0 && strcmp(s2, "Rock") == 0))
        {
            cout << "Player2" << endl;
        }
        else if ((strcmp(s1, "Rock") == 0 && strcmp(s2, "Scissors") == 0) ||
                (strcmp(s1, "Paper") == 0 && strcmp(s2, "Rock") == 0) ||
                (strcmp(s1, "Scissors") == 0 && strcmp(s2, "Paper") == 0))
        {
            cout << "Player1" << endl;
        }
        else
        {
            cout << "Tie" << endl;
        }
    }
    return 0;
}