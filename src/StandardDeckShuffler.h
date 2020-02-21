//
// Created by root on 20.02.2020.
//

#ifndef TEXASHOLDEMPOKERGAME_STANDARDDECKSHUFFLER_H
#define TEXASHOLDEMPOKERGAME_STANDARDDECKSHUFFLER_H

#include <vector>
#include "Card.h"
#include "IDeckShuffler.h"

using namespace texasHolderPoker;

class StandardDeckShuffler : public IDeckShuffler {
public:
    std::vector<Card> shuffleDeck() override;

private:

};


#endif //TEXASHOLDEMPOKERGAME_STANDARDDECKSHUFFLER_H
