#ifndef GLOBAL_VAR_&&_FUN_DECLARATION_H_INCLUDED
#define GLOBAL_VAR_&&_FUN_DECLARATION_H_INCLUDED

//for variables
int no_of_turns = 0, dice_return = 0, another_chance = 0,
    redpaw, redflag = 0, greenpaw, greenflag = 0, yellowpaw, yellowflag = 0, bluepaw, blueflag = 0,
    screenx = GetSystemMetrics(SM_CXSCREEN) / 2,
    screeny = GetSystemMetrics(SM_CYSCREEN) / 2,
    random1, random2,
    player_mod, ret_choice_2, ret_choice_3,
    check_var,
    var,
    page = 0,
    main_window,
    choice3_1= 0,
    choice3_2= 0,
    choice3_3= 0,
    choice3_4= 0;
bool win = true;

//for functions

void loadingscreen();
void red();
void green();
void blue();
void yellow();
void dice(int check);
void flagpasser();
void game_structure();
void redraw();
void safezone(int x, int y);
void checkbox(int turn);
void bite_test(char paw_val);
int bite(int bite, int turn);
void check_winner_result(char runner);


#endif // GLOBAL_VAR_&&_FUN_DECLARATION_H_INCLUDED
