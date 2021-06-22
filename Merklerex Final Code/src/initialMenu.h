#pragma once

#include <vector>
#include "OrderBookEntry.h"
#include "OrderBook.h"


class initialMenu
{
    public:
        initialMenu();
        /** Call this to start the sim */
        void init();
    private: 
        void printMenu();
        void printHelp();
        int getUserOption();
        void processUserOption(int userOption);

        std::string currentTime;

        OrderBook orderBook{"20200317.csv"};


};
