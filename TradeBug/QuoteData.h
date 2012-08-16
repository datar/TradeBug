#pragma once

#include <vector>

using namespace std;

class QuoteDataItem{
    unsigned long time;
    double price;
    double high,low;
    int volume;
};

class QuoteData{
public:
    QuoteData();
    void sort();
    void getQuoteHistory(unsigned long time, unsigned int dateNumber);
    void getIteratorByTime(unsigned long time);
private:
    vector<QuoteDataItem> data;
};