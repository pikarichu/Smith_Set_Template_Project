
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
            if (rhs.seqSearch(this->list[loc]) != -1)
            {
                result.insertEnd(this->list[loc]);
            }
        }
        return result;
    }
};

template <class elemType>
void unorderedSet<elemType>::insertAt(int location, const elemType& insertItem)
{
    int loc = unorderedArrayListType<elemType>::seqSearch(insertItem);
    //cout << "Index = " << loc << endl;
    if (loc == -1)
    {
        unorderedArrayListType<elemType>::insertAt(location, insertItem);
    }
    else
        cout << insertItem << " is already in list" << endl;
}

template <class elemType>
void unorderedSet<elemType>::insertEnd(const elemType& insertItem)
{
    int loc = unorderedArrayListType<elemType>::seqSearch(insertItem);
    //cout << "Index = " << loc << endl;
    if (loc == -1)
    {
        unorderedArrayListType<elemType>::insertEnd(insertItem);
    }
    else
        cout << insertItem << " is already in list" << endl;
}

template <class elemType>
void unorderedSet<elemType>::replaceAt(int location,
    const elemType& repItem)
{
    int loc = unorderedArrayListType<elemType>::seqSearch(repItem);
    //cout << "Index = " << loc << endl;
    if (loc == -1)
    {
        unorderedArrayListType<elemType>::replaceAt(location, repItem);
    }
    else
        cout << repItem << " is already in list" << endl;
}

template <class elemType>
unorderedSet<elemType>::unorderedSet(int size)
    : unorderedArrayListType<elemType>(size)
{
}
#endif