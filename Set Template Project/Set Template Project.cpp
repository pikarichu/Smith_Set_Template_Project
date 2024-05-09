// Set Template Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program takes sets of strings and integers, adds to specific points and the end of them, replaces values
//at specific points, and does the union and intersection set operators to groups of those sets

#include <iostream>
#include "unorderedSet.h"

using namespace std;

int main()
{
    //Creating an array of strings and an array of integers
    int intList[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    string strList[10] = { "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten" };
    unorderedSet<int> numbers(30);
    unorderedSet<string> words(30);
    for (int i = 0; i < 10; i++)
    {
        numbers.insertEnd(intList[i]);
        words.insertEnd(strList[i]);
    }
    //Adding integer values to the numbers set using insertEnd
    cout << "This is the number set: ";
    numbers.print();
    cout << "Inserting 7 to the end of the numbers set:" << endl;
    numbers.insertEnd(7);
    numbers.print();

    //Adding string values to the words set using insertEnd
    cout << endl << "This is the set of strings: ";
    words.print();
    cout << "Inserting 'Seven' to the end of the strings set:" << endl;
    words.insertEnd("Seven");
    words.print();
    cout << endl;
    
    //Using insertAt to insert an integer value to a specific position
    cout << "This is the number set: ";
    numbers.print();
    cout << "Inserting 13 into position 5 of the set: " << endl;
    numbers.insertAt(5, 13);
    numbers.print();
    //Doing it again to show that duplicates are not allowed
    cout << "Inserting 13 into position 7 of the set: " << endl;
    numbers.insertAt(7, 13);
    numbers.print();

    //Using insertAt to insert a string value to a specific position
    cout << endl << "This is the set of strings: ";
    words.print();
    cout << "Inserting 'Thirteen' into position 5 of the set: " << endl;
    words.insertAt(5, "Thirteen");
    words.print();
    //Doing it again to show that duplicates are not allowed
    cout << "Inserting 'Thirteen' into position 7 of the set: " << endl;
    words.insertAt(7, "Thirteen");
    words.print();

    //Using replaceAt to replace an integer value with another at a specific position
    cout << endl << "This is the number set: ";
    numbers.print();
    cout << "Replacing 6 with 11 in position 6 of the set: " << endl;
    numbers.replaceAt(6, 11);
    numbers.print();
    //Doing it again to show that duplicates are not allowed
    cout << "Replacing 8 with 11 in position 8 of the set: " << endl;
    numbers.replaceAt(8, 11);
    numbers.print();

    //Using replaceAt to replace a string value with another at a specific position
    cout << endl << "This is the set of strings: ";
    words.print();
    cout << "Replacing 'Six' with 'Eleven' in position 6 of the set: " << endl;
    words.replaceAt(6, "Eleven");
    words.print();
    //Doing it again to show that duplicates are not allowed
    cout << "Replacing 'Eight' with 'Eleven' in position 8 of the set: " << endl;
    words.replaceAt(8, "Eleven");
    words.print();
    cout << endl;

    //Testing the Union and Intersection operators with integers
    unorderedSet<int> numList(10), numList2(10), numList3(20);
    for (int count = 1; count < 11; count++)
    {
        numList2.insertEnd(count);
    }
    for (int count = 5; count < 15; count++)
    {
        numList.insertEnd(count);
    }
    cout << "Set 1: ";
    numList.print();
    cout << "Set 2: ";
    numList2.print();
    cout << "Set 1 and Set 2 Union: " << endl;
    numList3 = numList2 + numList;
    numList3.print();
    cout << "Set 1 and Set 2 Intersection: ";
    numList3 = numList - numList2;
    numList3.print();
    cout << endl;

    //Testing the Union and Intersection operators with strings
    unorderedSet<string> wordList(10), wordList2(10), wordList3(20);
    string strList2[10] = { "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen" };
    for (int i = 0; i < 10; i++)
    {
        wordList2.insertEnd(strList2[i]);
        wordList.insertEnd(strList[i]);
    }
    cout << "Set 1: ";
    wordList.print();
    cout << "Set 2: ";
    wordList2.print();
    cout << "Set 1 and Set 2 Union: " << endl;
    wordList3 = wordList + wordList2;
    wordList3.print();
    cout << "Set 1 and Set 2 Intersection: ";
    wordList3 = wordList - wordList2;
    wordList3.print();
}
