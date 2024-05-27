/*assign02_task03 - Average calculation*/


#include <iostream>
using namespace std;
int main()
{
    int game1_score,game2_score,game3_score;//taking three int variable to store the scores of three different games.
		float average_score;  //"average_score" is used to store the average scores of three different games
		cout<<"enter the scores of first game  =";
		cin>>game1_score;
		cout<<"enter the scores of second game =";
		cin>>game2_score;
		cout<<"enter the score of third game   =";
		cin>>game3_score;
		average_score=(game1_score+game2_score+game3_score)/3;
		cout<<"average of scores of three games="<<average_score;

    return 0;
}
