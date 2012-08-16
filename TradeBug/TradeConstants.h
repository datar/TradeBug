#pragma once

enum QuoteSignal{
    NONE = 0,
    LONG_EXPEXT,
    VIBRATION_EXPECT,
    SHORT_EXPECT
};

enum Operation{
    OPEN_LONG,
    OPEN_SHORT,
    CLOSE_LONG,
    CLOSE_SHORT
};

enum Position{
    SHORT_POSITION,
    NONE_POSIIOTN,
    LONG_POSITION
};