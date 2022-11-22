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
        }
        else if (ret_choice_2 == 2)
        {
            greenflag = 1;
            start_game();
        }
        else if (ret_choice_2 == 3)
        {
            closegraph();
            initwindow_800x400();
            goto back_button;
        }
    }
    else if (player_mod == 3)
    {
        ret_choice_3 = player_win3();
        if(choice3_4 == 0 || choice3_2 == 0 || choice3_3 == 0)
        {
            //means no blue flag
            redflag = 1;
            start_game();
        }
        else if (ret_choice_3 == 2)
        {
            //this is for exit button
            closegraph();
            goto back_button;
        }
        else if (choice3_1 == 0)
        {
