/*
Author: Kritika Singh & Kingsly Bude
Filename: main.cpp
Created on July 15, 2022
Purpose: Lab 4
Class: OOP I - 202242.33298-OOP-2200-06
*/

#include <iostream>
#include "functions.h"
using namespace std;

int main() {
	//seeding rand() in order to get unique numbers each time
	srand(time(0));
	
	//Variable declaration
	int* numsContainer = nullptr;
	int repeatCounter = 0;

	//deciding the number of numbers to generate, and therefore the size of the array that will hold them.
	int numsToGenerate = numberRange();
	numsContainer = new int[numsToGenerate];

	//Assining and displaying each number in the numsContainer array for the lottery game
	system("CLS");
	for (int i = 0; i < numsToGenerate; i++) {
		numsContainer[i] = generateRandomNumber(10);
		cout << "Generated number #" << i +1 << ": " << numsContainer[i] << endl;
	}

	//Iterating through each number generated for the lottery, checking to see if that
	for (int i = 0; i < numsToGenerate; i++) {

		//Iterate through the container again. Check to see if the current number has existed in the previous enteries.
		//Only goes up to the current(i) iteration.
		for (int j = 0; j < i; j++) {
			numsContainer[i] == numsContainer[j] ? repeatCounter++ : false;
		}
	}

	//Prize message
	cout << endl;
	prizeMessage(repeatCounter);
	return 0;
}