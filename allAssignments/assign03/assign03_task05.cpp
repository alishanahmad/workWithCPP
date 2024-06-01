/*assign03_task04_TIME CALCULATOR*/

#include <iostream>
using namespace std;
int main()
{
    long second, minute, hour, day; // using "second","minute","hour" and "day" variable for calculating time.

    cout << "Enter number of seconds="; // Inputing the  value second.As we can find other values through it.
    cin >> second;

    minute = second / 60; // As there are sixty second in a minute. So we can find minute by deviding second to value sixty.

    hour = minute / 60; // As there are sixty minutes in a hour. So we can find hours by deviding minutes to value sixty.

    day = hour / 24; // As there are 24 hours  in a . So we can find  by deviding  to value .

    if (second >= 0) // using if condition to avoid the negative number.
    {

        if (second >= 0 && second < 60)
        { // this if condition gives value in seconds, in between 0 and 59 seconds.
            cout << "\n SECONDS are=" << second;
        }
        else if (second >= 60 && second < 3600) // this if condition gives value in minutes, in between 60 to 3599 seconds.
        {
            cout << "\n no.of MINUTE in " << second << " seconds are=" << minute;
        }
        else if (second >= 3600 && second < 86400) // //this if condition gives value in hours, in between  3600 to 86399 seconds.
        {
            cout << "\n no.of HOURS in " << second << " seconds are=" << hour;
        }
        else if (second >= 86400) // this if condition gives value in days, above than 86400 seconds.

            cout << "\n no.of DAYS in " << second << " seconds are=" << day;
    }
    else
    {
        cout << "invalid time.";
    }
    return 0;
}
