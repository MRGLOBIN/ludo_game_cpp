#ifndef MENU_OPTIONS_H_INCLUDED
#define MENU_OPTIONS_H_INCLUDED

//global variables
bool mouse_bool_1 = TRUE;
int player = 0;

int start_interface_animation()
{
        initwindow_800x400();
        int workx, worky;
        //getting started with the initial animation
        settextstyle(6, 0, 4);
        for(int i = 0; i <= 125;i += 5)
        {
            cleardevice();
            //for animation of start
            if (i < 25)
            {
                worky = 180;
            }
            else if (i < 50)
            {
                worky = 181;
            }
            else if (i < 75)
            {
                worky = 182;
            }
            else if (i < 100)
            {
                worky = 183;
            }
            else if (i > 100)
            {
                worky = 184;
            }
            outtextxy(150 - i, worky, "Welcome to LUDO Game");
            //to get start as delay and delay after that
            if (i == 0)
            {
                delay(500);
            }
            else
            {
                delay(50);
            }
        }
        //getting started with the initial screen

        cleardevice();
        //text style for ludo

        for(int i = 0; i < 5; i++)
        {
            setcolor(WHITE);
            settextstyle(6, 0, 4);
            outtextxy(25, 185, "Welcome to LUDO Game");
            //text style for creator name

            setcolor(COLOR(150, 200, 180));
            settextstyle(10, 0, 3);
            outtextxy(110, 225, "Created by Group G");

            //for animation delay style we will delay draw
            if (i == 0)
            {
                delay(150);
                setcolor(WHITE);
                line(550, 80, 550, 320);
            }
            //is one is for menu text and line divisor
            else if (i == 1)
            {
                delay(150);
                setcolor(BLUE);
                settextstyle(10, 0, 4);
                outtextxy(580, 100,"Main Menu");
            }
            //setting color for the player buttons
            setcolor(DARKGRAY);
            if (i == 2)
            {


                //now draw the player text
                delay(150);
                outtextxy(620, 150, "2 Players");
            }
            else if (i == 3)
            {
                delay(150);
                outtextxy(620, 185, "3 Players");
            }
            else if (i == 4)
            {                                           //player 2 rectangle coordinates(620, 150, 750, 170)
                delay(150);                             //player 3 rectangle coordinates(620, 185, 750, 205)
                outtextxy(620, 215, "4 Players");       //player 4 rectangle coordinates(620, 215, 750, 235)
            }

        }
}


int start_interface()
{
    mouse_bool_1 = TRUE;
    while(mouse_bool_1)
        {
            cleardevice();
            //first lets create a new menu for the operations
            setcolor(WHITE);
            settextstyle(6, 0, 4);
            outtextxy(25, 185, "Welcome to LUDO Game");
            setcolor(COLOR(150, 200, 180));
            settextstyle(10, 0, 3);
            outtextxy(110, 225, "Created by Group G");
            setcolor(WHITE);
            line(550, 80, 550, 320);
            setcolor(BLUE);
            settextstyle(10, 0, 4);
            outtextxy(580, 100,"Main Menu");
            setcolor(DARKGRAY);
            settextstyle(10, 0, 3);
            outtextxy(620, 150, "2 Players");
            outtextxy(620, 185, "3 Players");
            outtextxy(620, 215, "4 Players");
            //now lets set the pointer to the selections
            if (player == 4)
            {
                outtextxy(590, 215, ">");
            }
            else if (player == 3)
            {
                outtextxy(590, 185, ">");
            }
            else if (player == 2)
            {
                outtextxy(590, 150, ">");
            }
            //player 2 rectangle coordinates(620, 150, 750, 170)
            //player 3 rectangle coordinates(620, 185, 750, 205)
            //player 4 rectangle coordinates(620, 215, 750, 235)
            //now lets start some animation effects

            if( mousex() >= 620 && mousey() >= 150 && mousex() <= 750 && mousey() <= 170)
            {
                setbkcolor(LIGHTGRAY);
                settextstyle(10, 0, 3);
                outtextxy(620, 150, "2 Players");

            }
            else
            {
                setcolor(DARKGRAY);
                setbkcolor(BLACK);
                settextstyle(10, 0, 3);
                outtextxy(620, 150, "2 Players");
            }
             if( mousex() >= 620 && mousey() >= 185 && mousex() <= 750 && mousey() <= 205)
            {
                setbkcolor(LIGHTGRAY);
                settextstyle(10, 0, 3);
                outtextxy(620, 185, "3 Players");
            }
            else
            {
                setcolor(DARKGRAY);
                setbkcolor(BLACK);
                settextstyle(10, 0, 3);
                outtextxy(620, 185, "3 Players");
            }
             if( mousex() >= 620 && mousey() >= 215 && mousex() <= 750 && mousey() <= 235)
            {
                setbkcolor(LIGHTGRAY);
                settextstyle(10, 0, 3);
                outtextxy(620, 215, "4 Players");
                setbkcolor(BLACK);
            }
            else
            {
                setcolor(DARKGRAY);
                setbkcolor(BLACK);
                settextstyle(10, 0, 3);
                outtextxy(620, 215, "4 Players");
            }
            if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 620 && mousey() >= 150 && mousex() <= 750 && mousey() <= 170)
                {
                    player = 2;
                }
            else if (ismouseclick(WM_LBUTTONDOWN) && mousex() >= 620 && mousey() >= 185 && mousex() <= 750 && mousey() <= 205)
            {
                player = 3;
            }
            else if (ismouseclick(WM_LBUTTONDOWN) && mousex() >= 620 && mousey() >= 215 && mousex() <= 750 && mousey() <= 235)
            {
                player = 4;
            }
            if (player == 4)
            {
                setcolor(COLOR(0, 200, 255));
                settextstyle(1, 0, 1);
                outtextxy(695, 370, "START");
            }
            else if (player == 3 || player == 2)
            {
                setcolor(COLOR(0, 200, 255));
                settextstyle(1, 0, 1);
                outtextxy(695, 370, "NEXT");
            }
            //here the coordinates for start and next button are (693, 368, 786, 386)
            if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 693 && mousey() >= 368 && mousex() <= 786 && mousey() <= 386)
            {
                mouse_bool_1 = FALSE;
            }
            clearmouseclick(WM_LBUTTONDOWN);
            delay(50);
            swapbuffers();
        }
        closegraph();
        return player;
}


int player_win2()
{
    //here is start for the 2 player menu
    initwindow_800x400();
#endif // MENU_OPTIONS_H_INCLUDED
