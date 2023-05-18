#include <bits/stdc++.h>
using namespace std;

pair<int, int> totalTimeInHours(pair<int, int> timeStart, pair<int, int> timeEnd)
{
    int startHr = timeStart.first;
    int startMin = timeStart.second;
    int endHr = timeEnd.first;
    int endMin = timeEnd.second;
    if (startMin > 59 || endMin > 59 || startHr > 23 || endHr > 23 || startHr == 0 || endHr == 0)
    {
        cout << "Invalid time! Try again..." << endl;
        return make_pair(0, 0);
    }
    else
    {
        int totalHrs;
        if (startHr > endHr)
            totalHrs = 12 + endHr - startHr;
        else if (startHr < endHr)
            totalHrs = endHr - startHr;
        else
            totalHrs = 0;

        int totalMins = (60 - startMin) + ((totalHrs - 1) * 60) + endMin;
        int resMin = totalMins % 60;
        int resHr = totalMins / 60;
        return make_pair(resHr, resMin);
    }
}

double salaryCount(pair<int, int> startTime, pair<int, int> endTime, double trvCost)
{
    pair<int, int> totalTime = totalTimeInHours(startTime, endTime);
    double salary = 0.0;
    salary += (double)totalTime.first * 460;
    double minToHour = (double)totalTime.second / 60;
    salary += minToHour * 460;
    salary += trvCost;
    return salary;
}

int main()
{
    pair<int, int> startTime, endTime;
    startTime = make_pair(13, 45);
    endTime = make_pair(16, 30);
    int travelCost = 500;
    double salary = salaryCount(startTime, endTime, travelCost);
    cout << salary;
}