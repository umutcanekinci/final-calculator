#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()

{
    int quiz1, quiz2, quiz3, quiz4, midterm, isPortfolio;

    cout << "Please enter your first quiz score: ";
    cin >> quiz1;

    cout << "Please enter your second quiz score: ";
    cin >> quiz2;

    cout << "Please enter your third quiz score: ";
    cin >> quiz3;

    cout << "Please enter your forth quiz score: ";
    cin >> quiz4;

    cout << "Please enter your midterm score: ";
    cin >> midterm;

    cout << "Please enter your IS portfolio score: ";
    cin >> isPortfolio;

    float total = ((quiz1 + quiz2 + quiz3 + quiz4) * 13 / 2) + (midterm * 30);
    float required = 65 - (total / 100);

    float requiredFinal = (required * 100) / 40;

    cout << endl << "You need " << requiredFinal << " points from final to pass the term." << endl << endl;

    if (required > 40)
    {

        cout << "You failed the term." << endl << "There is nothing you can do :(" << endl << endl;
        
    }

    cout << "Press enter to close application...";

    string str;
    cin >> str;
    

    return 0;

}