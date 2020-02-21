//
// Created by root on 20.02.2020.
//

#include "ConsoleView.h"
#include "Decision.h"
#include <iostream>



namespace texasHolderPoker {
    std::string ConvertEnumToString(const Decision &decision);

void ConsoleView::onPlayerDecision(const Decision &decision) {
    std::cout << "PLAYER bet: " << decision.money << std::endl;
    std::cout << "Decision of PLAYER: " << ConvertEnumToString(decision) << std::endl;
}

void ConsoleView::onCardsShow(const std::vector<Card> &showCards) {
//        std::cout <<
}

void ConsoleView::onGameStart(const GameSettings &gameSettings) {

}

void ConsoleView::onGameEnd(int winningPlayer) {
    std::cout << "The winner is ... " << winningPlayer << std::endl;
}

void ConsoleView::onRoundStart(const RoundSetup &roundSetup) {

}

void ConsoleView::onRoundEnd(const RoundResult &roundResult) {

}


std::string ConvertEnumToString(const Decision &decision) {
    if (decision.decisionKind == DecisionKind::Fold)
    {
        return "FOLD";
    }
    else if (decision.decisionKind == DecisionKind::Raise)
    {
        return "RAISE";
    }
    else
    {
        return "CALL";
    }


}

}