//
// Created by root on 20.02.2020.
//

#include "StandardDeckShuffler.h"
#include "Card.h"
#include <random>
#include <algorithm>


using namespace texasHolderPoker;

std::vector<Card> StandardDeckShuffler::shuffleDeck()
{
    Card card;

    std::vector<Card> deck;
    for (auto col = 0; col < 4; col++)
    {
        for (auto fig = 0; fig < 13; fig++)
        {
            card.figure = Figure(fig);
            card.color = Color(col);
            deck.push_back(card);
        }
    }

    std::random_device randomDevice;
    std::mt19937 generator(randomDevice());

    std::shuffle(deck.begin(), deck.end(), generator);

    return deck;
}
