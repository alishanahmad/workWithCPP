/*assign03_task08_FAT GRAM CALCULATOR*/

#include <iostream>
using namespace std;
int main()
{
    unsigned long food_calories, fat_gram, fat_calories; // variable are used to get respactive values.
    int per_calories;                                    // this variable is used to calculate percentage of calories.

    cout << "Enter the food calories=";
    cin >> food_calories; // taking input as calories gaining from food.

    cout << "Enter the value of fat in grams =";
    cin >> fat_gram; // taking input as no.of grams of fat.

    fat_calories = (fat_gram) * 9;                       // the no. of calories from fat are equale to 9 times fat grams.
    per_calories = (fat_calories * 100) / food_calories; // the total no. of percentage of fat calories in total food is finded by  this statement.

    if (food_calories >= 0 && fat_gram >= 0 && fat_calories <= food_calories) // the given condition is true iff when calories from food are greater than -1, fat grams are greater than -1 and calories from fat are less than calories from food.
    {

        if (per_calories < 30) // this condition is indicating that if the total calories from fat are less than the 30% of total food calories it displays a massage.
        {
            cout << "percentage of fat calories in food calories=" << per_calories << "%";
            cout << "\nfood is low in fat";
        }
        else
        {
            cout << "percentage of fat calories in food calories=" << per_calories << "%";
        }
    }
    else
    {
        cout << "invalid value.";
    }
    return 0;
}
