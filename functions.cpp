/*
Author: Kritika Singh & Kingsly Bude
Filename: functions.cpp
Created on July 15, 2022
Purpose: Lab 4
Class: OOP I - 202242.33298-OOP-2200-06
*/

#include <iostream>
#include <random>
#include "functions.h"
using namespace std;

int getCount()
{
    double number;
    cout << "Please enter 3, 6, or 7 as count of numbers: ";
    cin >> number;

    while(cin.fail())
    {
        cout << "Non-numeric entry, please try again: ";
        cin.clear();
        cin.ignore(1000,  '\n');
        cin >> number;
    }
    return number;
}

int numberRange()
{
    int userInput = getCount();
    while(userInput != 3 && userInput != 6 &&  userInput != 7)
    {
        cout << "Number is out of range!!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        userInput = getCount();
    }

    return userInput;
}

int generateRandomNumber(int num)
{
    int randomNumber = 0;
    randomNumber = rand() % num + 1;
    
    return randomNumber;
}

void prizeMessage(int repeatCounter) {
    cout << "Repeats: " << repeatCounter << endl;

    if (repeatCounter == 0) {
        cout << "Congragulations! First place winner with no repeat numbers!" << endl;
    }
    else if (repeatCounter == 1) {
        cout << "Second place winner! Only one repeat number!" << endl;
    }
    else if (repeatCounter >= 2) {
        cout << "Better luck next time! Multiple repeats detected." << endl;
    }
    return;
}
