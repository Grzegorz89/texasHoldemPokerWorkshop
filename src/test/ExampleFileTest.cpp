#include <gtest/gtest.h>

#include <Card.h>
#include <StandardDeckShuffler.h>
#include <Player_raise_if_2_require_money.h>
#include <ConsoleView.h>

namespace texasHolderPoker::test
{

TEST(ExampleTestSuite, ExampleTest)
{
    // test if we link properly to testing lib
    Card card;

    StandardDeckShuffler deckShuffler;
    const auto deck = deckShuffler.shuffleDeck();

    EXPECT_EQ(deck.size(), 52);

}


TEST(Test_Random_Player, Player_Raise) {
    Player_raise_if_2_require_money randomPlayer;
    Hand player1_cards;
    player1_cards.firstCard.color = Color::Diamonds;
    player1_cards.firstCard.figure = Figure::Ace;
    player1_cards.secondCard.color = Color::Hearts;
    player1_cards.secondCard.figure = Figure::Queen;
    randomPlayer.onRoundStarted(6000, player1_cards);
    ConsoleView console_View;
    const auto decision = randomPlayer.getDecision(250);
    console_View.onPlayerDecision(decision);
    EXPECT_EQ(decision.decisionKind, DecisionKind::Raise);
    EXPECT_EQ(decision.money, 500);
}


//TEST(Test_Console_View, Console_View_On_Player_Decision) {
//    IGameView console_View;
//    console_View.onCardsShow();
//
//
//}


//TEST(Test_Random_Player, Player_Call) {
//    Player_raise_if_2_require_money randomPlayer1;
//    const auto decision1 = randomPlayer1.getDecision(5000);
//    EXPECT_EQ(decision1.decisionKind, DecisionKind::Call);
//    EXPECT_EQ(decision1.money, 5000);
//}
//
//
//TEST(Test_Random_Player, Player_Fold) {
//    Player_raise_if_2_require_money randomPlayer2;
//    const auto decision2 = randomPlayer2.getDecision(6000);
//    EXPECT_EQ(decision2.decisionKind, DecisionKind::Fold);
//    EXPECT_EQ(decision2.money, 0);
//}
} // namespace texasHolderPoker::test
