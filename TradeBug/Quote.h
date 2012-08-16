#ifndef _QUOTE_H_
#define _QUOTE_H_

#include <vector>
#include "QuoteData.h"

using namespace std;

class Quote{
public:
    Quote();
    

    double GetData();
    int GetQuantity();
    double GetPrice();

    int begin();
    int next();
    bool hasNext();

    unsigned long getCurrentTime();

private:
    vector<QuoteDataItem> data;
    vector<QuoteDataItem>::iterator current;
    
};

#endif