//
// Created by root on 20.02.2020.
//

#ifndef TEXASHOLDEMPOKERGAME_CONSOLEVIEW_H
#define TEXASHOLDEMPOKERGAME_CONSOLEVIEW_H

#include <vector>
#include "IGameView.h"

namespace texasHolderPoker {
class ConsoleView : public IGameView {
public:
    void onPlayerDecision(const Decision &decision) override;

    void onCardsShow(const std::vector <Card> &showCards) override;

    void onGameStart(const GameSettings &gameSettings) override;

    void onGameEnd(int winningPlayer) override;

    void onRoundStart(const RoundSetup &roundSetup) override;

    void onRoundEnd(const RoundResult &roundResult) override;
};


#endif //TEXASHOLDEMPOKERGAME_CONSOLEVIEW_H
} //namespace texasHolderPoker