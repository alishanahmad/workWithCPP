/*assign02_task03 - Average Calculation*/

#include <iostream>
using namespace std;
int main()
{
    int scoreGame1, scoreGame2, scoreGame3; // taking three int variable to store the scores of three different games.
    float averageScore;                     //"averageScore" is used to store the average scores of three different games

    cout << "enter the scores of first game  =";
    cin >> scoreGame1;
    cout << "enter the scores of second game =";
    cin >> scoreGame2;
    cout << "enter the score of third game   =";
    cin >> scoreGame3;

    averageScore = (scoreGame1 + scoreGame2 + scoreGame3) / 3;

    cout << "average of scores of three games=" << averageScore;

    return 0;
}
