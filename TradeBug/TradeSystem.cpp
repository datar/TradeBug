#include "TradeSystem.h"

int TradeSystem::beat(){
    /*for(quote->begin(); quote->hasNext(); quote->next()){
        strategy->run();
    }*/

    int shortMov = 5;
    int longMov = 10;
    double shortMA, longMA;

    vector<QuoteSignal> signals;
    vector<Operation> operations;
    vector<Position> positions;

    for(size_t i = 0; i < data.size(); i++){
        if(i < longMov){
            signals.push_back(QuoteSignal::NONE);
            continue;
        }
        for(int j = i; j > i - shortMov; j--){
            shortMA += data[j];
        }
        shortMA = shortMA/shortMov;

        for(int j = i; j > i - longMov; j--){
            longMA += data[j];
        }
        longMA = longMA/longMov;

        if(shortMA > longMA){
            signals.push_back(QuoteSignal::LONG_EXPEXT);
        }
        if(shortMA < longMA){
            signals.push_back(QuoteSignal::SHORT_EXPECT);
        }
    }
}