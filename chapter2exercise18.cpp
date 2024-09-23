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
    //Declare
    int NUM_SURVEYED;

    //information
    cout << "Enter the number of customers surveyed: ";
    cin >> NUM_SURVEYED;

    //Variables to hold the percentages
    float percent_1_or_more = 0.15; //

    //Percentage of customers purchasing 1 or more energy drinks per week
    float percent_pref_citrus = 0.58; //

    // Calculating totals 
    float total_1_or_more = NUM_SURVEYED * percent_1_or_more; 
    float grand_total = total_1_or_more * percent_pref_citrus;

        percent_pref_citrus = .58,
        total_1_or_more = NUM_SURVEYED * percent_1_or_more,
        grand_total = total_1_or_more * percent_pref_citrus;

    //output results
        cout << endl << endl;
        cout << "The approximate number of customers in the survey who\n";
        cout << "Purchase one or more energy drinks per week is " << total_1_or_more << endl;

        cout << "The approximate number of customers inthe surey who\n";
        cout << "prefer citrus-flavored energy drinks is " << grand_total << endl;

        cout << endl << endl;
  
    return 0;


}
    