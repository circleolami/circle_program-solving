#include <iostream>
using namespace std;

int main()
{
    string subject;
    string grade;
    float credit, sum = 0, cnt = 0;

    for (int i = 0; i < 20; i++)
    {
        cin >> subject >> credit >> grade;
        if (grade == "P")
            cnt += 0;
        else
            cnt += credit;
        if (grade == "A+")
            sum += 4.5 * credit;
        else if (grade == "A0")
            sum += 4.0 * credit;
        else if (grade == "B+")
            sum += 3.5 * credit;
        else if (grade == "B0")
            sum += 3.0 * credit;
        else if (grade == "C+")
            sum += 2.5 * credit;
        else if (grade == "C0")
            sum += 2.0 * credit;
        else if (grade == "D+")
            sum += 1.5 * credit;
        else if (grade == "D0")
            sum += 1.0 * credit;
        else if (grade == "F")
            sum += 0.0 * credit;
    }
    sum = sum / cnt;
    cout << fixed;
    cout.precision(6);
    cout << sum;

    return 0;
}