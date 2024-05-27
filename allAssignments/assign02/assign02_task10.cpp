/*assign02_task10- movie box office and theater profit*/

#include <iostream>
using namespace std;
int main()
{
    int adultTickets, childTickets, adultTicketsAboveSixtyYear;
    int adultTicketsPrice = 500, childTicketsPrice = 250;
    float discountOffered, ticketPriceAboveSixty;
    float theaterShare = 20 / 100;

    adultTicketsPrice = 500;
    childTicketsPrice = 250;

    cout << "No of adult Tickets : ";
    cin >> adultTickets;
    cout << "No of child Tickets : ";
    cin >> childTickets;
    cout << "No of adult of above sixty years Tickets : ";
    cin >> adultTicketsAboveSixtyYear;

    discountOffered = adultTicketsPrice * 10 / 100;

    ticketPriceAboveSixty = adultTicketsAboveSixtyYear * (adultTicketsPrice - discountOffered);

    float grossBoxOfficeProfit = (adultTickets * adultTicketsPrice) + (childTickets * childTicketsPrice) + ticketPriceAboveSixty;

    float netBoxOfficeProfit = grossBoxOfficeProfit * theaterShare;

    float paidToDistributer = grossBoxOfficeProfit - netBoxOfficeProfit;

    cout << "Gross Box Office Profit	:" << grossBoxOfficeProfit << endl;
    cout << "Net Box Office Profit : " << netBoxOfficeProfit << endl;
    cout << "Amount Paid to Distributor: " << paidToDistributer;

    return 0;
}