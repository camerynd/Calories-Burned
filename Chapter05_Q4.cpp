#include <iostream>
using namespace std;

void calories_burned(int& min);//function prototype

const float CAL = 3.6;//universal constant

int main()
{
    int minutes;//local variable
    //exlain program to user
    cout << "This program calculates the amount of calories burned ";
    cout << endl;
    cout << "after an amount of time, in intervals of five minutes.";
    cout << endl << endl;
    //function call
    calories_burned(minutes);

    return 0;
}
//function
void calories_burned(int& min)
{
    for (min = 5; min <= 30; min += 5)//for loop setting "min" variable as five, telling 
//loop to run until min reaches 30, and adding 5 to min's value every time the loop repeats
    cout << min << " minutes burns " << (CAL * min) << " calories." << endl;
//displaying the amount of minutes and calories burned per minute during every loop
}