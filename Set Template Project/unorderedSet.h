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
    int seqSearch(const elemType& searchItem) const;

    unorderedSet(int size = 100);

};

template <class elemType>


template <class elemType>
void unorderedSet<elemType>::insertAt(int location,
    const elemType& insertItem)
{
    int loc = unorderedArrayListType<elemType>::seqSearch(insertItem);
    cout << "Index = " << loc << endl;
    if (loc != -1)
    {
        cout << "Item is in list" << endl;

        //break;
    }
    else
    {
        cout << "Item is not in list" << endl;
        unorderedArrayListType<elemType>::insertAt(location, insertItem);
    }
}

template <class elemType>
void unorderedSet<elemType>::insertEnd(const elemType& insertItem)
{
    int loc = unorderedArrayListType<elemType>::seqSearch(insertItem);
    cout << "Index = " << loc << endl;
    if (loc != -1)
    {
        cout << "Item is in list" << endl;

        //break;
    }
    else
    {
        cout << "Item is not in list" << endl;
        unorderedArrayListType<elemType>::insertEnd(insertItem);
    }
}

template <class elemType>
void unorderedSet<elemType>::replaceAt(int location,
    const elemType& repItem)
{
    int loc = unorderedArrayListType<elemType>::seqSearch(repItem);
    cout << "Index = " << loc << endl;
    if (loc != -1)
    {
        cout << "Item is in list" << endl;

        //break;
    }
    else
    {
        cout << "Item is not in list" << endl;
        unorderedArrayListType<elemType>::replaceAt(location, repItem);
    }
}

template <class elemType>
int unorderedSet<elemType>::seqSearch
(const elemType& searchItem) const
{
    return unorderedArrayListType<elemType>::seqSearch(searchItem);
 
}


template <class elemType>
unorderedSet<elemType>::unorderedSet(int size)
    : unorderedArrayListType<elemType>(size)

{
}



#endif

