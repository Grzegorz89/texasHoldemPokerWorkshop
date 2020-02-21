//
// Created by root on 20.02.2020.
//

#include "Player_raise_if_2_require_money.h"
#include "Decision.h"

namespace texasHolderPoker {


void Player_raise_if_2_require_money::onRoundStarted(int moneyCount, const Hand &hand) {
    this->player_money = moneyCount;
    this->player_cards = hand;
}

Decision Player_raise_if_2_require_money::getDecision(int requiredMoney) {
    Decision dec;
    if (2* requiredMoney <= player_money)
    {
        dec.decisionKind = DecisionKind::Raise;
        dec.money = 2 * requiredMoney;
    }
    else if (requiredMoney == player_money)
    {
        dec.decisionKind = DecisionKind::Call;
        dec.money = requiredMoney;
    }
    else
    {
        dec.decisionKind = DecisionKind::Fold;
        dec.money = 0; //requiredMoney; //0 do zastanowienia
    }

    return dec;
}

    void Player_raise_if_2_require_money::onCardsShow(const std::vector<Card>& showCards) {

    }

    void Player_raise_if_2_require_money::onPlayerDecision(const Decision &decision) {

    }

    void Player_raise_if_2_require_money::onGameStart(const GameSettings &gameSettings) {

    }

    void Player_raise_if_2_require_money::onGameEnd(int winningPlayer) {

    }

    void Player_raise_if_2_require_money::onRoundStart(const RoundSetup &roundSetup) {

    }

    void Player_raise_if_2_require_money::onRoundEnd(const RoundResult &roundResult) {

    }

}