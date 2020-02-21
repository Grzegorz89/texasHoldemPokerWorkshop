project(TexasHoldemPokerLib)

set(CMAKE_CXX_STANDARD 17)

aux_source_directory(. SRC_FILES)

add_library(TexasHoldemPokerLib STATIC ${SRC_FILES} StandardDeckShuffler.cpp StandardDeckShuffler.h Player_raise_if_2_require_money.cpp Player_raise_if_2_require_money.h ConsoleView.cpp ConsoleView.h)

target_include_directories(TexasHoldemPokerLib INTERFACE .)

add_subdirectory(test)