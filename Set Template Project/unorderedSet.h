
#ifndef H_unorderedSet
#define H_unorderedSet

#include "unorderedArrayListType.h"

template <class elemType>
class unorderedSet: public unorderedArrayListType<elemType>
{
public:
    void insertAt(int location, const elemType& insertItem);
    void insertEnd(const elemType& insertItem);
    void replaceAt(int location, const elemType& repItem);
    unorderedSet(int size = 100);
    unorderedSet<elemType> operator+ (const unorderedSet<elemType>& rhs)
    {
        unorderedSet<elemType> result = unorderedSet<elemType>(this->maxSize + rhs.maxSize);
        for (int loc = 0; loc < this->length; loc++)
        {
            result.insertEnd(this->list[loc]);
           

        }
        for (int loc = 0; loc < rhs.length; loc++)
        {
            result.insertEnd(rhs.list[loc]);


        }
        return result;
    }
    unorderedSet<elemType> operator- (const unorderedSet<elemType>& rhs)
    {
        unorderedSet<elemType> result = unorderedSet<elemType>(this->maxSize + rhs.maxSize);
        for (int loc = 0; loc < this->length; loc++)
        {
            result.insertEnd(this->list[loc]);


        }
        for (int loc = 0; loc < rhs.length; loc++)
        {
            result.insertEnd(rhs.list[loc]);


        }
        return result;
    }
};

/*
template <class elemType>
unorderedSet<elemType> operator+ (const unorderedSet<elemType>& rhs)
{
    unorderedSet<elemType> result = unorderedSet<elemType>(this->maxSize + rhs.maxSize);
    for (int loc = 0; loc < this->length; loc++)
    {
        result.insertEnd(this->list[loc]);


    }
    for (int loc = 0; loc < rhs.length; loc++)
    {
        result.insertEnd(rhs.list[loc]);


    }
    return result;
}*/

/*template <class elemType>
elemType operator- (const elemType& list)
{
    elemType tempSet(20);
    for (int loc = 0; loc < list.length; loc++)
    {
        if (tempSet.seqSearch(list[loc]) = -1)
        {
            tempSet.removeAt(list[loc]);
        }

    }
    return tempSet;
};*/

/*template <class elemType>
elemType operator- (const elemType& set1, const elemType& set2)
{
    for (int loc = 0; loc < unorderedSet<elemType>::set2.length; loc++)
    {
        if (set1.seqSearch(set2[loc]) = -1)
        {
            set1.removeAt(set2[loc]);
        }

    }
    return set1;
};*/

template <class elemType>
void unorderedSet<elemType>::insertAt(int location, const elemType& insertItem)
{
    int loc = unorderedArrayListType<elemType>::seqSearch(insertItem);
    //cout << "Index = " << loc << endl;
    if (loc == -1)
    {
        //cout << "Item is in list" << endl;
        unorderedArrayListType<elemType>::insertAt(location, insertItem);
    }
}

template <class elemType>
void unorderedSet<elemType>::insertEnd(const elemType& insertItem)
{
    int loc = unorderedArrayListType<elemType>::seqSearch(insertItem);
    //cout << "Index = " << loc << endl;
    if (loc == -1)
    {
        //cout << "Item is in list" << endl;
        unorderedArrayListType<elemType>::insertEnd(insertItem);
    }
}

template <class elemType>
void unorderedSet<elemType>::replaceAt(int location,
    const elemType& repItem)
{
    int loc = unorderedArrayListType<elemType>::seqSearch(repItem);
    //cout << "Index = " << loc << endl;
    if (loc == -1)
    {
        //cout << "Item is in list" << endl;
        unorderedArrayListType<elemType>::replaceAt(location, repItem);
    }
}

template <class elemType>
unorderedSet<elemType>::unorderedSet(int size)
    : unorderedArrayListType<elemType>(size)

{
}




#endif