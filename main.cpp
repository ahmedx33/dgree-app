#include <iostream>
using namespace std;

int main()
{
    int dgree;

    while (true)
    {
        cout << "Enter degree: ";
        cin >> dgree;

        if (dgree > 100 || dgree < 0)
            break;

        if (dgree > 100 || dgree < 0)
            break;

        if (dgree >= 90)
        {
            if (dgree >= 95)
                cout << "A+" << endl;
            else
                cout << "-A" << endl;
        }
        else if (dgree >= 80)
        {
            if (dgree >= 85)
                cout << "A" << endl;
            else
                cout << "-B" << endl;
        }
        else if (dgree >= 70)
        {
            if (dgree >= 75)
                cout << "B" << endl;
            else
                cout << "-C" << endl;
        }
        else if (dgree >= 60)
        {
            if (dgree >= 65)
                cout << "C" << endl;
            else
                cout << "-D" << endl;
        }
        else if (dgree >= 50)
        {
            if (dgree >= 55)
                cout << "D" << endl;
            else
                cout << "-E" << endl;
        }
    }

    return 0;
}
