#include <iostream>
#include <limits>
#include "calfaq.h"

//extern int is_leap(int style, int year);
using namespace std;

void process_leap_year() {
    cout << "Leap Year:" << endl;
    cout << "==========" << endl;
    std::cout << std::boolalpha; // print bools as true or false
	//std::cin >> std::boolalpha;  // Allow the user to enter 'true' or 'false' for boolean values. This is case-sensitive, so True or TRUE will not work
    bool proceed = true;
    while (proceed == true) { 
        cout << "Which year to check for leap-year? Type a positive integer." << endl;
        int year = 0;
        cin >> year;
        if(!cin) // or if(cin.fail())
        {
            // user didn't input a number
            cin.clear(); // reset failbit
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
            // next, request user reinput
        }        
        cout << "You typed: " << year << endl;
        bool leap = 0;
        leap=is_leap(0,year);
        cout << year << " year as per my calculation is: " << leap << endl;
        cout << "Another run ? Type a 0/false (stop) or 1/true (continue)" << endl;
        cin >> proceed;
        if(!cin) // or if(cin.fail())
        {
            // user didn't input a number
            cin.clear(); // reset failbit
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
            // next, request user reinput
        }        
    }
    std::cout << std::noboolalpha;
    return;
}


int main() {
    cout << "Hello Calendar World!" << endl;
    int choice = 9;
    do {
        cout << endl << endl << endl;
        cout << "\t\t\tChoose A Calendar Function" << endl;
        cout << "\t\t\t==========================" << endl;
        cout << endl;
        cout << "\t1.\tLeap Year" << endl;
        cout << "\t9.\tExit" << endl;
        cout << endl;
        cout << "Enter a number from 1 to 9" << endl;
        cin >> choice;
        if(!cin) // or if(cin.fail())
        {
            // user didn't input a number
            cin.clear(); // reset failbit
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
            // next, request user reinput
        }        
        switch (choice) {
            case 1:
                process_leap_year();
                break;
            default:
                break;                
        }
    } while(choice!=9);
    return(0);
}

/*
int days_in_month(int style, int year, int month);
int solar_number(int year);
int day_of_week(int style, int year, int month, int day);
int golden_number(int year);
int epact(int style, int year);
void paschal_full_moon(int style, int year, int *month, int *day);
void easter(int style, int year, int *month, int *day);
void simple_gregorian_easter(int year, int *month, int *day);
int indiction(int year);
int julian_period(int year);
int date_to_jdn(int style, int year, int month, int day);
void jdn_to_date(int style, int JD, int *year, int *month, int *day);
void week_number(int year, int month, int day, int *week_number, int *week_year);
*/