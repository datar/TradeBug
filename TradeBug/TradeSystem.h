#ifndef _TRADE_SYSTEM_H_
#define _TRADE_SYSTEM_H_

#include <vector>
#include <utility>

#include "TradeConstants.h"
#include "Quote.h"
#include "Trade.h"
#include "Strategy.h"

using namespace std;

class TradeSystem{
public:
    TradeSystem();
    int beat();
    int initQuote(Quote* quote);
    int initStrategy(Strategy* strategy);

    vector<double> data;


private:
    Quote* quote;
    Trade* trade;
    Strategy* strategy;
};

#endif