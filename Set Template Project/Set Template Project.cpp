// Set Template Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "unorderedArrayListType.h"
#include "unorderedSet.h"
//#include "arrayListType.h"

using namespace std;


int main()
{
    
    unorderedSet<int> numList(10), numList2(10), numList3(20);
    //unorderedSet<int> numList2(10);
    //unorderedSet<int> numList3(20);

    //unorderedArrayListType<int> numList(10);
    //unorderedArrayListType<int> numList2(10);
    //<int> numList3(20);

    //int num;
    //arrayListType<elemType> obj1;
    for (int count = 0; count < 8; count++)
    {
        numList2.insertEnd(count);
    }
    for (int count = 5; count < 15; count++)
    {
        numList.insertEnd(count);
    }
    numList2.print();
    numList.print();
    numList3 = numList2 + numList;
    numList3.print();
    /*cout << "item 3 is in position: " << numList2.seqSearch(3) << endl;
    numList2.insertAt(1, 1);
    numList2.insertAt(3, 15); 
    numList2.insertEnd(17);
    numList2.replaceAt(4, 25);
    numList2.print();
    */
}
