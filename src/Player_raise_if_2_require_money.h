//
// Created by root on 20.02.2020.
//

#ifndef TEXASHOLDEMPOKERGAME_PLAYER_RAISE_IF_2_REQUIRE_MONEY_H
#define TEXASHOLDEMPOKERGAME_PLAYER_RAISE_IF_2_REQUIRE_MONEY_H

#include <vector>
#include "IPlayer.h"
#include "IGameView.h"
#include "Hand.h"
namespace texasHolderPoker {

class Player_raise_if_2_require_money : public IPlayer, public IGameView {
public: //IPlayer

    void onRoundStarted(int moneyCount, const Hand &hand) override;

    Decision getDecision(int requiredMoney) override;

public: //IGameView

    void onCardsShow(const std::vector <Card>& showCards) override;

    void onPlayerDecision(const Decision &decision) override;

    void onGameStart(const GameSettings &gameSettings) override;

    void onGameEnd(int winningPlayer) override;

    void onRoundStart(const RoundSetup &roundSetup) override;

    void onRoundEnd(const RoundResult &roundResult) override;





private:
    int player_money = 0;
    Hand player_cards;
//    auto requireMoney = 5;


};
}

#endif //TEXASHOLDEMPOKERGAME_PLAYER_RAISE_IF_2_REQUIRE_MONEY_H
