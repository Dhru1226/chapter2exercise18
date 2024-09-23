/*
Title: Chapter 2 Exercise 18 - Energy Drink Consumption
File name: Chapter2exercise18
Programmer: Dhrumi Mistry
Date: 09/16/2024
Requirements:
A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. 
Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:
The approximate number of customers in the survey who purchase one or more energy drinks per week.
The approximate number of customers in the survey who prefer citrus-flavored energy drinks.


*/

#include <iostream>
using namespace std;

int main()
{
    const int NUM_SURVEYED = 16500;

    float percent_1_or_more = .15,
        percent_pref_citrus = .58,
        total_1_or_more = NUM_SURVEYED * percent_1_or_more,
        grand_total = total_1_or_more * percent_pref_citrus;

    cout << endl << endl;
    cout << "The approximate # of customers in the survey who/n";
    cout << "purchase on or moreenergy drinks per week is ";
    cout << total_1_or_more << endl;

    cout << "The approximate # of customers in the survey who/n";
    cout << "prefer citrus-flavored energy drinks ";
    cout << grand_total << endl;
    cout << endl << endl;
    return 0;


}
    