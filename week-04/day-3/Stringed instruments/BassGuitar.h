//
// Created by hun46 on 2019. 04. 24..
//

#ifndef STRINGED_INSTRUMENTS_ELECTRICGUITAR_H
#define STRINGED_INSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument{
public:
    BassGuitar(int x = 4);

    std::string sound() override;

protected:
private:

};


#endif //STRINGED_INSTRUMENTS_ELECTRICGUITAR_H