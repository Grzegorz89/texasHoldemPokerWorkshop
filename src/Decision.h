#pragma once

namespace texasHolderPoker
{

enum class DecisionKind
{
    Fold, //pass
    Call, //sprawdzic i wyrownac stawke
    Raise, //podbicie
};

struct Decision
{
    DecisionKind decisionKind;
    int money = 0;
};

} // namespace texasHolderPoker
