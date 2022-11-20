#include <graphics.h>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "global_var_&&_fun_declaration.h"
#include "window_screen_start.h"
#include "menu_options.h"
#include "paw_structure.h"
#include "game_structure.h"
#include "game_starts.h"

using namespace std;

int main()
{
//    delevlopers_info();
//    return 0;
    srand(time(NULL));
    //setting back as a back checkpoint for back button
    start_interface_animation();
    back_button:
    player_mod = start_interface();
    //creating different windows on basis on return from interface
    if (player_mod == 2)
    {
        ret_choice_2 = player_win2();
        if(ret_choice_2 == 1)
        {
            redflag = 1;
            start_game();
