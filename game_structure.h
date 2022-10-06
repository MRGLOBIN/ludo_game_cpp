#ifndef GAME_STRUCTURE_H_INCLUDED
#define GAME_STRUCTURE_H_INCLUDED

//time to give make souls of runners
redcolorpawn r1, r2, r3, r4;
greencolorpaw g1, g2, g3, g4;
yellowcolorpaw y1, y2, y3, y4;
bluecolorpaw b1, b2, b3, b4;

//for dice
void dice(int check)
{
// checks works
// outtextxy(100, 100, "why me");
    if(another_chance == 1)
    {
        another_chance = 0;
    }
        //for dice centre
        int center_x, center_y;
        char value1[1], value2[1];
        for(int i = 900, j = 730; i <= 900+25*8, j >= 730-25*8; i += 50, j -=50)
        {
            center_x = i, center_y = j;
            //OK COUTING values
            if(check == 1)
            {
                setcolor(12);
            }
            else if(check == 2)
            {
                setcolor(10);
            }
            else if(check == 3)
            {
                setcolor(14);
            }
            else if(check == 4)
            {
                setcolor(BLUE);
            }
            line(center_x - 34, center_y - 34, center_x + 34, center_y - 34);
            line(center_x + 34, center_y - 34, center_x + 34, center_y + 34);
            line(center_x + 34, center_y + 34, center_x - 34, center_y + 34);
            line(center_x - 34, center_y + 34, center_x - 34, center_y - 34);
            random1 = rand() % 6 + 1;
            //sprint f will store it as char and then i can print its value
            sprintf(value1, "%d", random1);
            settextstyle(10, HORIZ_DIR, 6);
            if(check == 1)
               {
                  setcolor(237);
               }
            else if(check == 2)
            {
                setcolor(2);
            }
            else if(check == 3)
            {
                setcolor(50390521);
            }
            else if(check == 4)
            {
                setcolor(63714048);
            }
            outtextxy(i - textwidth("5") / 2, j - textheight("5") / 2, value1);
            //determining whose turn
            if(check == 1)
            {
                checkbox(1);
            }
            else if(check == 2)
            {
                checkbox(2);
            }
            else if(check == 3)
            {
                checkbox(3);
            }
            else if(check == 4)
            {
                checkbox(4);
            }
            delay(50);
            redraw();
            //again damm your self
            center_x = i + 25, center_y = j - 25;
            if(i < 900+25*8)
            {
                if(check == 1)
                {
                    setcolor(12);
                }
                if(check == 2)
                {
                    setcolor(10);
                }
                if(check == 3)
                {
                    setcolor(14);
                }
                if(check == 4)
                {
                    setcolor(BLUE);
                }
                line(center_x, center_y - 48, center_x + 48, center_y);
                line(center_x + 48, center_y, center_x, center_y + 48);
                line(center_x, center_y + 48, center_x - 48, center_y);
                line(center_x - 48, center_y, center_x, center_y - 48);
                if(random1 < 4)
                {
                    random2 = random1 + 3;
                }
                else
                {
                    random2 = random1 - 3;
                }
                sprintf(value2, "%d", random2);
                settextstyle(10, HORIZ_DIR, 6);
                if(check == 1)
                {
                      setcolor(237);
                }
                else if(check == 2)
                {
                    setcolor(2);
                }
                else if(check == 3)
                {
                    setcolor(50390521);
                }
                else if(check == 4)
                {
                    setcolor(63714048);
                }
                outtextxy(i - textwidth("5") / 2, j - textheight("5") / 2, value2);
                if(check == 1)
                {
                    checkbox(1);
                }
                else if(check == 2)
                {
                    checkbox(2);
                }
                else if(check == 3)
                {
                    checkbox(3);
                }
                else if(check == 4)
                {
                    checkbox(4);
                }
                delay(50);
                redraw();
            }
            if(i == 1100 && j == 530)
                {
                    dice_return = random1;
                    no_of_turns++;
                }
        }

}

void redraw()
{

    delay(10);
    game_structure();
}

void checkbox(int turn)
{
    int x = 850, y;
    if(redflag == 1 || turn == 1)
    {
        check_var = 1;
    }
    else if(redflag == 2 || turn == 2)
    {
        check_var = 2;
    }
    else if(redflag == 3 || turn == 3)
    {
        check_var = 3;
    }
    else if(redflag == 4 || turn == 4)
    {
        check_var = 4;
    }
    else
    {
        check_var = 0;
    }
    if(check_var == 1)
    {
        y = 57;
    }
    else if(check_var == 2)
    {
        y = 85;
    }
    else if(check_var == 3)
    {
        y = 113;
    }
    else if(check_var == 4)
    {
        y = 141;
    }
    //for static players info
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, 237);
    bar(850, 60, 868, 78);
    settextstyle(8, 0, 1);
    outtextxy(873, 60, "PLAYER 1");
    setfillstyle(SOLID_FILL, GREEN);
    bar(850, 88, 868, 106);
    settextstyle(8, 0, 1);
    outtextxy(873, 88, "PLAYER 2");
    setfillstyle(SOLID_FILL, YELLOW);
    bar(850, 116, 868, 134);
    settextstyle(8, 0, 1);
    outtextxy(873, 116, "PLAYER 3");
    setfillstyle(SOLID_FILL, BLUE);
    bar(850, 144, 868, 162);
    settextstyle(8, 0, 1);
    outtextxy(873, 144, "PLAYER 4");
    //making check sign
    setcolor(COLOR(237, 0, 0));
    settextstyle(10, 0, 3);
    outtextxy(x, y, ">");
}

void safezone(int x, int y)
{
    int star[22] = {x+4, y+18, x+18, y+17, x+24, y+2, x+30, y+17, x+43, y+18, x+32, y+26,
                    x+39, y+43, x+23, y+32, x+8, y+43, x+15, y+26, x+4, y+18};
    setcolor(BLACK);
    drawpoly(11, star);
}

void game_structure()
{
    setactivepage(page);
    setvisualpage(1-page);
    delay(10);
    clearviewport();
    //setting things to back
    // but i dont need it guess
//    setbkcolor(BLACK);
//    setcolor(COLOR(0, 20, 37));
    setfillstyle(SOLID_FILL, COLOR(0, 20, 37));
    //making ludo border
    //new update no border
    bar( 0,  0, 840, 720);
    setfillstyle(SOLID_FILL, WHITE);
    bar(20, 20, 820, 700);
    //lets spread greenery
    setfillstyle(SOLID_FILL, COLOR(0, 180, 0));
    bar(446,  65, 500, 110);
    bar(393, 65, 446, 290);
    //now lets colour the skies
    setfillstyle(SOLID_FILL, COLOR(0, 127, 255));
    bar(340, 605, 394, 651);
    bar(393, 426, 446, 652);
    //setting the inside color to white and then start drawing
    //ok its the new update for home runners
    setfillstyle(SOLID_FILL, COLOR(255, 255, 0));
    bar(500, 336, 766, 380);
    bar(713, 380, 766, 425);
    //for red
    setfillstyle(SOLID_FILL, 231);
    bar( 74, 291, 126, 335);
    bar( 74, 336, 340, 380);
    //first start with the lines
    setcolor(BLACK);
    //these are the vertical lines
    //gap is 53 and 54
    //vertical start is 290; for upper map gap 50 and for lower is 75
    //for green
    line( 73, 290,  73, 425);
    line(126, 290, 126, 425);
    line(179, 290, 179, 425);
    line(233, 290, 233, 425);
    line(286, 290, 286, 425);
    //this one is left home line
    line(340,  20, 340, 701);
    //these are inner home lines
    line(393,  20, 393, 290);
    line(446,  20, 446, 290);
    //this one is right home line
    line(500,  20, 500, 701);
    line(554, 290, 554, 425);
    line(606, 290, 606, 425);
    line(660, 290, 660, 425);
    line(714, 290, 714, 425);
    line(766, 290, 766, 425);
    //these are inner home lines
    line(393, 425, 393, 701);
    line(446, 425, 446, 701);
    //horizontal lines
    //gap is 45
    line(340,  65, 500,  65);
    line(340, 110, 500, 110);
    line(340, 155, 500, 155);
    line(340, 200, 500, 200);
    line(340, 245, 500, 245);
    //top home line
    line( 20, 290, 821, 290);
    //inner home lines
    line( 20, 335, 340, 335);
    line(500, 335, 821, 335);
    line( 20, 380, 340, 380);
    line(500, 380, 821, 380);
    //this one is bottom home line
    line( 20, 425, 821, 425);
    line(340, 470, 500, 470);
    line(340, 515, 500, 515);
    line(340, 560, 500, 560);
    line(340, 605, 500, 605);
    line(340, 650, 500, 650);
    // all done
    //now filling the red part
    setfillstyle(SOLID_FILL, 237);
    bar( 23,  23, 337, 287);
    //graph 1
    setcolor(12);
    //elimatinating floodfill 1
    setfillstyle(SOLID_FILL, 12);
    bar(73, 73, 286, 236);
    //making places for paws
    setfillstyle(SOLID_FILL, 237);
    fillellipse(115, 115, 32, 32);
    fillellipse(233, 115, 32, 32);
    fillellipse(115, 200, 32, 32);
    fillellipse(233, 200, 32, 32);
    //for red home circle(100, 315, 10);
    /////////a fix required
    //26.5x
    //22.5y
    //53 gap // y is 360 for red inner home runner
    //circle(312, 360, 10);
    //now comes green part
    setfillstyle(SOLID_FILL, COLOR(0, 180, 0));
    bar(504, 23, 818, 287);
    setcolor(COLOR(0, 200, 0));
    setfillstyle(SOLID_FILL, COLOR(0, 200, 0));
    bar(553, 73, 767, 236);
    setfillstyle(SOLID_FILL, COLOR(0, 180, 0));
    fillellipse(595, 115, 32, 32);
    fillellipse(713, 115, 32, 32);
    fillellipse(595, 200, 32, 32);
    fillellipse(713, 200, 32, 32);
    //for base spawn circle(473, 90, 10);
    //for base runner circle(420, 90, 10);
    //now for yellow
    setfillstyle(SOLID_FILL, COLOR(255, 255, 0));
    bar(501, 426, 821, 701);
    setcolor(COLOR(237, 201, 127));
    //ha ha gold field color
    setfillstyle(SOLID_FILL, COLOR(237, 201, 127));
    bar(553, 498, 767, 661);
    setfillstyle(SOLID_FILL, COLOR(255, 255, 0));
    fillellipse(600, 540, 32, 32);
    fillellipse(713, 540, 32, 32);
    fillellipse(600, 625, 32, 32);
    fillellipse(713, 625, 32, 32);
    //for base circle(740, 405, 10);
    //last for base circle(528, 360, 10);
    //i guess manual will be good for this time
    //blue part
    setfillstyle(SOLID_FILL, COLOR(0, 127, 255));
    bar(20, 426, 340, 700);
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    bar(73, 498, 286, 661);
    setfillstyle(SOLID_FILL, COLOR(0, 127, 255));
    fillellipse(115, 540, 32, 32);
    fillellipse(233, 540, 32, 32);
    fillellipse(115, 625, 32, 32);
    fillellipse(233, 625, 32, 32);
    //for base circle(368, 630, 10);
    //for home start circle(420, 450, 10);
    //for home
    setcolor(BLACK);
    line(340, 290, 500, 426);
    line(500, 290, 340, 426);
    //home colors
    setfillstyle(SOLID_FILL, COLOR(237, 0, 0));
    int fillarr[] = {341, 292,  420, 358, 341, 426}, fill1arr[] = {341, 290, 420, 358, 499, 290},
        fill2arr[] = {342, 426, 420, 358, 499, 426}, fill3arr[] = {499, 292, 420, 358, 499, 426};
    fillpoly(3, fillarr);
    setfillstyle(SOLID_FILL, COLOR(0, 180, 0));
    fillpoly(3, fill1arr);
    setfillstyle(SOLID_FILL, COLOR(0, 127, 255));
    fillpoly(3, fill2arr);
    setfillstyle(SOLID_FILL, YELLOW);
    fillpoly(3, fill3arr);
    //home text
    setcolor(WHITE);
    //for blue
    settextstyle(10, 0, 3);
    setbkcolor(COLOR(0, 127, 255));
    outtextxy(392, 390, "HOME");
    //for yellow
    setbkcolor(YELLOW);
    settextstyle(10, 1, 3);
    outtextxy(470, 385, "HOME");
    //for green
    setbkcolor(50829319);
    settextstyle(10, 2, 3);
    outtextxy(448, 325, "HOME");
    //for red
    setbkcolor(237);
    settextstyle(10, 3, 3);
    outtextxy(375, 330, "HOME");
    //for safe zones
    //  missing
    setbkcolor(BLACK);
    setcolor(WHITE);
    settextstyle(10, 0, 2);
    outtextxy(880, 5, "MADE BY THE FINEST");
    outtextxy(920, 35, " DEVELOPERS(GROUP G)");
    setfillstyle(SOLID_FILL, COLOR(0, 29, 38));
    //for dice
    bar(850, 660, 1190, 710);
    setcolor(COLOR(0, 118, 151));
    //this one is for how to play
    rectangle(1026, 129, 1190, 171);
    //this one is for about
    rectangle(1026, 179, 1191, 221);
    //Also Throw dice coordinates
    rectangle(850, 660, 1190, 710);
    setcolor(COLOR(0 ,200, 255));
    setbkcolor(COLOR(0, 29, 38));
    settextstyle(10, 0, 5);
    outtextxy(895, 668, "THROW DICE");
    //this one is for htp
    bar(1027, 130, 1190, 170);
    //if sound possible
        //missing
    //for about button
    bar(1027, 180, 1190, 220);
    setcolor(COLOR(0, 200, 255));
    settextstyle(10, 0, 3);
    outtextxy(1040, 188, "DEVELOPERS");
    outtextxy(1030, 138, "HOW TO PLAY");
    setbkcolor(BLACK);
    //adding safezones
    safezone(345, 110);
    safezone(663, 288);
    safezone(449, 560);
    safezone(129, 380);
    if(another_chance == 1)
    {
        //setcolor(COLOR(0, 118, 151));
        setcolor(WHITE);
        settextstyle(8, 0, 2);
        outtextxy(873, 450, "you got another chance");
        outtextxy(873, 500, "to throw a dice");
    }
    //for check box
    if(redflag == 1)
    {
        checkbox(1);
    }
    else if(greenflag == 1)
    {
        checkbox(2);
    }
    else if(yellowflag == 1)
    {
        checkbox(3);
    }
    else if(blueflag == 1)
    {
        checkbox(4);
    }
    //displaying the runners now
    if (player_mod == 2)
    {
        if(ret_choice_2 == 1)
        {

            r1.display(1);
            r2.display(2);
            r3.display(3);
            r4.display(4);

            y1.display(1);
            y2.display(2);
            y3.display(3);
            y4.display(4);
        }
        else if (ret_choice_2 == 2)
        {
            g1.display(1);
            g2.display(2);
            g3.display(3);
            g4.display(4);

            b1.display(1);
            b2.display(2);
            b3.display(3);
            b4.display(4);
        }
    }
    else if (player_mod == 3)
    {
        if(choice3_4 == 0)
        {
            //means no blue flag
            g1.display(1);
            g2.display(2);
            g3.display(3);
            g4.display(4);

            r1.display(1);
            r2.display(2);
            r3.display(3);
            r4.display(4);

            y1.display(1);
            y2.display(2);
            y3.display(3);
            y4.display(4);
        }
        else if (choice3_3 == 0)
        {
            //means no yellow flag
            g1.display(1);
            g2.display(2);
            g3.display(3);
            g4.display(4);

            r1.display(1);
            r2.display(2);
            r3.display(3);
            r4.display(4);

            b1.display(1);
            b2.display(2);
            b3.display(3);
            b4.display(4);
        }
        else if (choice3_2 == 0)
        {
            //means no greenflag
            r1.display(1);
            r2.display(2);
            r3.display(3);
            r4.display(4);

            b1.display(1);
            b2.display(2);
            b3.display(3);
            b4.display(4);

            y1.display(1);
            y2.display(2);
            y3.display(3);
            y4.display(4);
        }
        else if (choice3_1 == 0)
        {
            //means no redflag
            g1.display(1);
            g2.display(2);
            g3.display(3);
            g4.display(4);

            b1.display(1);
            b2.display(2);
            b3.display(3);
            b4.display(4);

            y1.display(1);
            y2.display(2);
            y3.display(3);
            y4.display(4);
        }
    }
    else if (player_mod == 4)
    {
        g1.display(1);
        g2.display(2);
        g3.display(3);
        g4.display(4);

        r1.display(1);
        r2.display(2);
        r3.display(3);
        r4.display(4);

        b1.display(1);
        b2.display(2);
        b3.display(3);
        b4.display(4);

        y1.display(1);
        y2.display(2);
        y3.display(3);
        y4.display(4);
    }

    page = 1 - page;
    //test case

}


//functions for the paw team call
//for green
void green()
{
    //making throw button active
    int mx, my;
    while(greenflag == 1 && no_of_turns < 3)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            mx = mousex();
            my = mousey();
            if(mx > 849 && my > 659 && mx < 1191 && my < 711)
            {
                //setting flag to zero
                greenflag = 0;
                dice(2);
                if((g1.dice_number + dice_return >= 6 && g1.dice_number + dice_return <= 62) ||
                    (g2.dice_number + dice_return >= 6 && g2.dice_number + dice_return <= 62) ||
                    (g3.dice_number + dice_return >= 6 && g3.dice_number + dice_return <= 62) ||
                    (g4.dice_number + dice_return >= 6 && g4.dice_number + dice_return <= 62) )
                {
                    greenpaw = 1;
                }
                else if(player_mod == 2)
                {
                    no_of_turns = 0;
                    delay(1000);
                    blueflag = 1;
                    checkbox(4);
                    redraw();
                }
                else if(player_mod == 3)
                {
                    if(choice3_4 == 0)
                    {
                        //means no blue flag
                        no_of_turns = 0;
                        delay(1000);
                        yellowflag = 1;
                        checkbox(3);
                        redraw();
                    }
                    else if (choice3_3 == 0)
                    {
                        //means no yellow flag
                        no_of_turns = 0;
                        delay(1000);
                        blueflag = 1;
                        checkbox(4);
                        redraw();
                    }
                    else if (choice3_1 == 0)
                    {
                        //means no redflag
                        no_of_turns = 0;
                        delay(1000);
                        yellowflag = 1;
                        checkbox(3);
                        redraw();
                    }

                }
                else
                {
                    no_of_turns = 0;
                    delay(1000);
                    yellowflag = 1;
                    checkbox(3);
                    redraw();
                }
            }
            else if(mx > 1027 && my > 180 && mx < 1190 && my < 220)
            {
                delevlopers_info();
                setcurrentwindow(main_window);
            }
            else if(mx > 1027 && my > 130 && mx < 1190 && my < 170)
            {
                how_play();
                setcurrentwindow(main_window);
            }
        }
    }
    //paw selection
    while(greenpaw == 1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            mx = mousex();
            my = mousey();
            if(mx > g1.x - 18 && my > g1.y - 18 && mx < g1.x + 18 && my < g1.y + 18)
            {
                if(g1.flag == 0 && dice_return == 6)
                {
                    g1.flag = 1;
                    greenpaw = 0;
                }
                if(g1.flag == 1 && g1.dice_number < 62)
                {
                    g1.dice_number += dice_return;
                    greenpaw = 0;
                    bite_test('g');
                }
            }
            else if(mx > g2.x - 18 && my > g2.y - 18 && mx < g2.x + 18 && my < g2.y + 18)
            {
                if(g2.flag == 0 && dice_return == 6)
                {
                    g2.flag = 1;
                    greenpaw = 0;
                }
                if(g2.flag == 1 && g2.dice_number < 62)
                {
                    g2.dice_number += dice_return;
                    greenpaw = 0;
                    bite_test('g');
                }
            }
            else if(mx > g3.x - 18 && my > g3.y - 18 && mx < g3.x + 18 && my < g3.y + 18)
            {
                if(g3.flag == 0 && dice_return == 6)
                {
                    g3.flag = 1;
                    greenpaw = 0;
                }
                if(g3.flag == 1 && g3.dice_number < 62)
                {
                    g3.dice_number += dice_return;
                    greenpaw = 0;
                    bite_test('g');
                }
            }
            else if(mx > g4.x - 18 && my > g4.y - 18 && mx < g4.x + 18 && my < g4.y + 18)
            {
                if(g4.flag == 0 && dice_return == 6)
                {
                    g4.flag = 1;
                    greenpaw = 0;
                }
                if(g4.flag == 1 && g4.dice_number < 62)
                {
                    g4.dice_number += dice_return;
                    greenpaw = 0;
                    bite_test('g');
                }
            }
            else if(mx > 1027 && my > 180 && mx < 1190 && my < 220)
            {
                delevlopers_info();
                setcurrentwindow(main_window);
            }
            else if(mx > 1027 && my > 130 && mx < 1190 && my < 170)
            {
                how_play();
                setcurrentwindow(main_window);
            }
        }
    }

}

//for red
void red()
{
    //making throw button active
    int mx, my;
    while(redflag == 1 && no_of_turns < 3)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            mx = mousex();
            my = mousey();
            if(mx > 849 && my > 659 && mx < 1191 && my < 711)
                {
                //setting flag to zero
                redflag = 0;
                dice(1);
                if((r1.dice_number + dice_return >= 6 && r1.dice_number + dice_return <= 62) ||
                    (r2.dice_number + dice_return >= 6 && r2.dice_number + dice_return <= 62) ||
                    (r3.dice_number + dice_return >= 6 && r3.dice_number + dice_return <= 62) ||
                    (r4.dice_number + dice_return >= 6 && r4.dice_number + dice_return <= 62) )
                {
                    redpaw = 1;
                }
                else if(player_mod == 2)
                {
                    no_of_turns = 0;
                    delay(1000);
                    yellowflag = 1;
                    checkbox(3);
                    redraw();
                }
                else if(player_mod == 3)
                {
                    if(choice3_4 == 0)
                    {
                        //means no blue flag
                        no_of_turns = 0;
                        delay(1000);
                        greenflag = 1;
                        checkbox(2);
                        redraw();
                    }
                    else if (choice3_3 == 0)
                    {
                        //means no yellow flag
                        no_of_turns = 0;
                        delay(1000);
                        greenflag = 1;
                        checkbox(2);
                        redraw();
                    }
                    else if (choice3_2 == 0)
                    {
                        //means no greenflag
                        no_of_turns = 0;
                        delay(1000);
                        yellowflag = 1;
                        checkbox(3);
                        redraw();
                    }
                }
                else
                {
                    no_of_turns = 0;
                    delay(1000);
                    greenflag = 1;
                    checkbox(2);
                    redraw();
                }
            }
            else if(mx > 1027 && my > 180 && mx < 1190 && my < 220)
            {
                delevlopers_info();
                setcurrentwindow(main_window);
            }
            else if(mx > 1027 && my > 130 && mx < 1190 && my < 170)
            {
                how_play();
                setcurrentwindow(main_window);
            }
        }
    }
    //paw selection
    while(redpaw == 1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            mx = mousex();
            my = mousey();
            if(mx > r1.x - 18 && my > r1.y - 18 && mx < r1.x + 18 && my < r1.y + 18)
            {
                if(r1.flag == 0 && dice_return == 6)
                {
                    r1.flag = 1;
                    redpaw = 0;
                }
                if(r1.flag == 1 && r1.dice_number < 62)
                {
                    r1.dice_number += dice_return;
                    redpaw = 0;
                    bite_test('r');
                }
            }
            else if(mx > r2.x - 18 && my > r2.y - 18 && mx < r2.x + 18 && my < r2.y + 18)
            {
                if(r2.flag == 0 && dice_return == 6)
                {
                    r2.flag = 1;
                    redpaw = 0;
                }
                if(r2.flag == 1 && r2.dice_number < 62)
                {
                    r2.dice_number += dice_return;
                    redpaw = 0;
                    bite_test('r');
                }
            }
            else if(mx > r3.x - 18 && my > r3.y - 18 && mx < r3.x + 18 && my < r3.y + 18)
            {
                if(r3.flag == 0 && dice_return == 6)
                {
                    r3.flag = 1;
                    redpaw = 0;
                }
                if(r3.flag == 1 && r3.dice_number < 62)
                {
                    r3.dice_number += dice_return;
                    redpaw = 0;
                    bite_test('r');
                }
            }
            else if(mx > r4.x - 18 && my > r4.y - 18 && mx < r4.x + 18 && my < r4.y + 18)
            {
                if(r4.flag == 0 && dice_return == 6)
                {
                    r4.flag = 1;
                    redpaw = 0;
                }
                if(r4.flag == 1 && r4.dice_number < 62)
                {
                    r4.dice_number += dice_return;
                    redpaw = 0;
                    bite_test('r');
                }
            }
            else if(mx > 1027 && my > 180 && mx < 1190 && my < 220)
            {
                delevlopers_info();
                setcurrentwindow(main_window);
            }
            else if(mx > 1027 && my > 130 && mx < 1190 && my < 170)
            {
                how_play();
                setcurrentwindow(main_window);
            }
        }
    }
}

//for blue
void blue()
{
    //making throw button active
    int mx, my;
    while(blueflag == 1 && no_of_turns < 3)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            mx = mousex();
            my = mousey();
            if(mx > 849 && my > 659 && mx < 1191 && my < 711)
            {
                //setting flag to zero
                blueflag = 0;
                dice(4);
                if((b1.dice_number + dice_return >= 6 && b1.dice_number + dice_return <= 62) ||
                    (b2.dice_number + dice_return >= 6 && b2.dice_number + dice_return <= 62) ||
                    (b3.dice_number + dice_return >= 6 && b3.dice_number + dice_return <= 62) ||
                    (b4.dice_number + dice_return >= 6 && b4.dice_number + dice_return <= 62) )
                {
                    bluepaw = 1;
                }
                else if(player_mod == 2)
                {
                    no_of_turns = 0;
                    delay(1000);
                    greenflag = 1;
                    checkbox(2);
                    redraw();
                }
                else if(player_mod == 3)
                {
                    if (choice3_3 == 0)
                    {
                        //means no yellow flag
                        no_of_turns = 0;
                        delay(1000);
                        redflag = 1;
                        checkbox(1);
                        redraw();
                    }
                    else if (choice3_2 == 0)
                    {
                        //means no greenflag
                        no_of_turns = 0;
                        delay(1000);
                        redflag = 1;
                        checkbox(1);
                        redraw();
                    }
                    else if (choice3_1 == 0)
                    {
                        //means no redflag
                        no_of_turns = 0;
                        delay(1000);
                        greenflag = 1;
                        checkbox(2);
                        redraw();
                    }
                }
                else
                {
                    no_of_turns = 0;
                    delay(1000);
                    redflag = 1;
                    checkbox(1);
                    redraw();
                }
            }
            else if(mx > 1027 && my > 180 && mx < 1190 && my < 220)
            {
                delevlopers_info();
                setcurrentwindow(main_window);
            }
        }
    }
    //paw selection
    while(bluepaw == 1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            mx = mousex();
            my = mousey();
            if(mx > b1.x - 18 && my > b1.y - 18 && mx < b1.x + 18 && my < b1.y + 18)
            {
                if(b1.flag == 0 && dice_return == 6)
                {
                    b1.flag = 1;
                    bluepaw = 0;
                }
                if(b1.flag == 1 && b1.dice_number < 62)
                {
                    b1.dice_number += dice_return;
                    bluepaw = 0;
                    bite_test('b');
                }
            }
            else if(mx > b2.x - 18 && my > b2.y - 18 && mx < b2.x + 18 && my < b2.y + 18)
            {
                if(b2.flag == 0 && dice_return == 6)
                {
                    b2.flag = 1;
                    bluepaw = 0;
                }
                if(b2.flag == 1 && b2.dice_number < 62)
                {
                    b2.dice_number += dice_return;
                    bluepaw = 0;
                    bite_test('b');
                }
            }
            else if(mx > b3.x - 18 && my > b3.y - 18 && mx < b3.x + 18 && my < b3.y + 18)
            {
                if(b3.flag == 0 && dice_return == 6)
                {
                    b3.flag = 1;
                    bluepaw = 0;
                }
                if(b3.flag == 1 && b3.dice_number < 62)
                {
                    b3.dice_number += dice_return;
                    bluepaw = 0;
                    bite_test('b');
                }
            }
            else if(mx > b4.x - 18 && my > b4.y - 18 && mx < b4.x + 18 && my < b4.y + 18)
            {
                if(b4.flag == 0 && dice_return == 6)
                {
                    b4.flag = 1;
                    bluepaw = 0;
                }
                if(b4.flag == 1 && b4.dice_number < 62)
                {
                    b4.dice_number += dice_return;
                    bluepaw = 0;
                    bite_test('b');
                }
            }
            else if(mx > 1027 && my > 180 && mx < 1190 && my < 220)
            {
                delevlopers_info();
                setcurrentwindow(main_window);
            }
            else if(mx > 1027 && my > 130 && mx < 1190 && my < 170)
            {
                how_play();
                setcurrentwindow(main_window);
            }
        }
    }
}

//for yellow
void yellow()
{
    //making throw button active
    int mx, my;
    while(yellowflag == 1 && no_of_turns < 3)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            mx = mousex();
            my = mousey();
            if(mx > 849 && my > 659 && mx < 1191 && my < 711)
            {
                //setting flag to zero
                yellowflag = 0;
                dice(3);
                if((y1.dice_number + dice_return >= 6 && y1.dice_number + dice_return <= 62) ||
                    (y2.dice_number + dice_return >= 6 && y2.dice_number + dice_return <= 62) ||
                    (y3.dice_number + dice_return >= 6 && y3.dice_number + dice_return <= 62) ||
                    (y4.dice_number + dice_return >= 6 && y4.dice_number + dice_return <= 62) )
                {
                    yellowpaw = 1;
                }
                else if(player_mod == 2)
                {
                    no_of_turns = 0;
                    delay(1000);
                    redflag = 1;
                    checkbox(1);
                    redraw();
                }
                else if(player_mod == 3)
                {
                    if(choice3_4 == 0)
                    {
                        //means no blue flag
                        no_of_turns = 0;
                        delay(1000);
                        redflag = 1;
                        checkbox(1);
                        redraw();
                    }
                    else if (choice3_2 == 0)
                    {
                        //means no greenflag
                        no_of_turns = 0;
                        delay(1000);
                        blueflag = 1;
                        checkbox(4);
                        redraw();
                    }
                    else if (choice3_1 == 0)
                    {
                        //means no redflag
                        no_of_turns = 0;
                        delay(1000);
                        blueflag = 1;
                        checkbox(4);
                        redraw();
                    }
                }
                else
                {
                    no_of_turns = 0;
                    delay(1000);
                    blueflag = 1;
                    checkbox(4);
                    redraw();
                }
            }
            else if(mx > 1027 && my > 180 && mx < 1190 && my < 220)
            {
                delevlopers_info();
                setcurrentwindow(main_window);
            }
            else if(mx > 1027 && my > 130 && mx < 1190 && my < 170)
            {
                how_play();
                setcurrentwindow(main_window);
            }
        }
    }
    //paw selection
    while(yellowpaw == 1)
    {
        if(ismouseclick(WM_LBUTTONDOWN))
        {
            clearmouseclick(WM_LBUTTONDOWN);
            mx = mousex();
            my = mousey();
            if(mx > y1.x - 18 && my > y1.y - 18 && mx < y1.x + 18 && my < y1.y + 18)
            {
                if(y1.flag == 0 && dice_return == 6)
                {
                    y1.flag = 1;
                    yellowpaw = 0;
                }
                if(y1.flag == 1 && y1.dice_number < 62)
                {
                    y1.dice_number += dice_return;
                    yellowpaw = 0;
                    bite_test('y');
                }
            }
            else if(mx > y2.x - 18 && my > y2.y - 18 && mx < y2.x + 18 && my < y2.y + 18)
            {
                if(y2.flag == 0 && dice_return == 6)
                {
                    y2.flag = 1;
                    yellowpaw = 0;
                }
                if(y2.flag == 1 && y2.dice_number < 62)
                {
                    y2.dice_number += dice_return;
                    yellowpaw = 0;
                    bite_test('y');
                }
            }
            else if(mx > y3.x - 18 && my > y3.y - 18 && mx < y3.x + 18 && my < y3.y + 18)
            {
                if(y3.flag == 0 && dice_return == 6)
                {
                    y3.flag = 1;
                    yellowpaw = 0;
                }
                if(y3.flag == 1 && y3.dice_number < 62)
                {
                    y3.dice_number += dice_return;
                    yellowpaw = 0;
                    bite_test('y');
                }
            }
            else if(mx > y4.x - 18 && my > y4.y - 18 && mx < y4.x + 18 && my < y4.y + 18)
            {
                if(y4.flag == 0 && dice_return == 6)
                {
                    y4.flag = 1;
                    yellowpaw = 0;
                }
                if(y4.flag == 1 && y4.dice_number < 62)
                {
                    y4.dice_number += dice_return;
                    yellowpaw = 0;
                    bite_test('y');
                }
            }
            else if(mx > 1027 && my > 180 && mx < 1190 && my < 220)
            {
                delevlopers_info();
                setcurrentwindow(main_window);
            }
            else if(mx > 1027 && my > 130 && mx < 1190 && my < 170)
            {
                how_play();
                setcurrentwindow(main_window);
            }
        }
    }
}


void bite_test(char paw_val)
{
    if(paw_val == 'r')
    {
        if((r1.dice_number-13 == g1.dice_number || r2.dice_number-13 == g1.dice_number ||
            r3.dice_number-13 == g1.dice_number || r4.dice_number-13 == g1.dice_number ) &&
            (g1.dice_number != 0 && g1.dice_number != 6 && g1.dice_number != 19 && g1.dice_number != 27 && g1.dice_number != 32 &&
             g1.dice_number != 14 && g1.dice_number != 40 && g1.dice_number != 45 && g1.dice_number != 53))
        {
            bite(5, 1);
        }
        else if((r1.dice_number-13 == g2.dice_number || r2.dice_number-13 == g2.dice_number ||
            r3.dice_number-13 == g2.dice_number || r4.dice_number-13 == g2.dice_number ) &&
            (g2.dice_number != 0 && g2.dice_number != 6 && g2.dice_number != 19 && g2.dice_number != 27 && g2.dice_number != 32 &&
            g2.dice_number != 14 && g2.dice_number != 40 && g2.dice_number != 45 && g2.dice_number != 53))
        {
            bite(6, 1);
        }
        else if((r1.dice_number-13 == g3.dice_number || r2.dice_number-13 == g3.dice_number ||
            r3.dice_number-13 == g3.dice_number || r4.dice_number-13 == g3.dice_number ) &&
            (g3.dice_number != 0 && g3.dice_number != 6 && g3.dice_number != 19 && g3.dice_number != 27 && g3.dice_number != 32 &&
             g3.dice_number != 14 && g3.dice_number != 40 && g3.dice_number != 45 && g3.dice_number != 53))
        {
            bite(7, 1);
        }
        else if((r1.dice_number-13 == g4.dice_number || r2.dice_number-13 == g4.dice_number ||
            r3.dice_number-13 == g4.dice_number || r4.dice_number-13 == g4.dice_number ) &&
            (g4.dice_number != 0 && g4.dice_number != 6 && g4.dice_number != 19 && g4.dice_number != 27 && g4.dice_number != 32 &&
             g4.dice_number != 14 && g4.dice_number != 40 && g4.dice_number != 45 && g4.dice_number != 53))
        {
            bite(8, 1);
        }
        else if((r1.dice_number-26 == y1.dice_number || r2.dice_number-26 == y1.dice_number ||
            r3.dice_number-26 == y1.dice_number || r4.dice_number-26 == y1.dice_number ) &&
            (y1.dice_number != 0 && y1.dice_number != 6 && y1.dice_number != 19 && y1.dice_number != 27 && y1.dice_number != 32 &&
             y1.dice_number != 14 && y1.dice_number != 40 && y1.dice_number != 45 && y1.dice_number != 53))
        {
            bite(9, 1);
        }
        else if((r1.dice_number-26 == y2.dice_number || r2.dice_number-26 == y2.dice_number ||
            r3.dice_number-26 == y2.dice_number || r4.dice_number-26 == y2.dice_number ) &&
            (y2.dice_number != 0 && y2.dice_number != 6 && y2.dice_number != 19 && y2.dice_number != 27 && y2.dice_number != 32 &&
             y2.dice_number != 14 && y2.dice_number != 40 && y2.dice_number != 45 && y2.dice_number != 53))
        {
            bite(10, 1);
        }
        else if((r1.dice_number-26 == y3.dice_number || r2.dice_number-26 == y3.dice_number ||
            r3.dice_number-26 == y3.dice_number || r4.dice_number-26 == y3.dice_number ) &&
            (y3.dice_number != 0 && y3.dice_number != 6 && y3.dice_number != 19 && y3.dice_number != 27 && y3.dice_number != 32 &&
             y3.dice_number != 14 && y3.dice_number != 40 && y3.dice_number != 45 && y3.dice_number != 53))
        {
            bite(11, 1);
        }
        else if((r1.dice_number-26 == y4.dice_number || r2.dice_number-26 == y4.dice_number ||
            r3.dice_number-26 == y4.dice_number || r4.dice_number-26 == y4.dice_number ) &&
            (y4.dice_number != 0 && y4.dice_number != 6 && y4.dice_number != 19 && y4.dice_number != 27 && y4.dice_number != 32 &&
             y4.dice_number != 14 && y4.dice_number != 40 && y4.dice_number != 45 && y4.dice_number != 53))
        {
            bite(12, 1);
        }
        else if((r1.dice_number == b1.dice_number-13 || r2.dice_number  == b1.dice_number-13 ||
            r3.dice_number  == b1.dice_number-13 || r4.dice_number  == b1.dice_number-13 ) &&
            (b1.dice_number != 0 && b1.dice_number != 6 && b1.dice_number != 19 && b1.dice_number != 27 && b1.dice_number != 32 &&
             b1.dice_number != 14 && b1.dice_number != 40 && b1.dice_number != 45 && b1.dice_number != 53))
        {
            bite(13, 1);
        }
        else if((r1.dice_number   == b2.dice_number-13 || r2.dice_number  == b2.dice_number-13 ||
            r3.dice_number  == b2.dice_number-13 || r4.dice_number == b2.dice_number-13 ) &&
            (b2.dice_number != 0 && b2.dice_number != 6 && b2.dice_number != 19 && b2.dice_number != 27 && b2.dice_number != 32 &&
             b2.dice_number != 14 && b2.dice_number != 40 && b2.dice_number != 45 && b2.dice_number != 53))
        {
            bite(14, 1);
        }
        else if((r1.dice_number  == b3.dice_number-13 || r2.dice_number  == b3.dice_number-13 ||
            r3.dice_number  == b3.dice_number-13 || r4.dice_number == b3.dice_number-13 ) &&
            (b3.dice_number != 0 && b3.dice_number != 6 && b3.dice_number != 19 && b3.dice_number != 27 && b3.dice_number != 32 &&
             b3.dice_number != 14 && b3.dice_number != 40 && b3.dice_number != 45 && b3.dice_number != 53))
        {
            bite(15, 1);
        }
        else if((r1.dice_number  == b4.dice_number-13 || r2.dice_number == b4.dice_number-13 ||
            r3.dice_number  == b4.dice_number-13 || r4.dice_number  == b4.dice_number-13 ) &&
            (b4.dice_number != 0 && b4.dice_number != 6 && b4.dice_number != 19 && b4.dice_number != 27 && b4.dice_number != 32 &&
             b4.dice_number != 14 && b4.dice_number != 40 && b4.dice_number != 45 && b4.dice_number != 53))
        {
            bite(16, 1);
        }
        else if(player_mod == 2)
        {
            if(dice_return != 6 && no_of_turns < 3)
            {
                no_of_turns = 0;
                yellowflag = 1;
                checkbox(3);
            }
            //special case if user got 3 times 6
            else if(no_of_turns == 3)
            {
                no_of_turns = 0;
                yellowflag = 1;
                checkbox(3);
            }
            else
            {
                redflag = 1;
                another_chance = 1;
                checkbox(1);
            }
            check_winner_result('r');
        }
        else if(player_mod == 3)
        {
            if(ret_choice_3 == 1)
            {
                //means no blueflag
                if(dice_return != 6 && no_of_turns < 3)
                {
                    no_of_turns = 0;
                    greenflag = 1;
                    checkbox(2);
                }
                //special case if user got 3 times 6
                else if(no_of_turns == 3)
                {
                    no_of_turns = 0;
                    greenflag = 1;
                    checkbox(2);
                }
                else
                {
                    redflag = 1;
                    another_chance = 1;
                    checkbox(1);
                }
                check_winner_result('r');
            }
            else if (ret_choice_3 == 2)
            {
                //means no yellow flag
                if(dice_return != 6 && no_of_turns < 3)
                {
                    no_of_turns = 0;
                    greenflag = 1;
                    checkbox(2);
                }
                //special case if user got 3 times 6
                else if(no_of_turns == 3)
                {
                    no_of_turns = 0;
                    greenflag = 1;
                    checkbox(2);
                }
                else
                {
                    redflag = 1;
                    another_chance = 1;
                    checkbox(1);
                }
                check_winner_result('r');
            }
            else if (ret_choice_3 == 4)
            {
                //means no greenflag
                if(dice_return != 6 && no_of_turns < 3)
                {
                    no_of_turns = 0;
                    yellowflag = 1;
                    checkbox(3);
                }
                //special case if user got 3 times 6
                else if(no_of_turns == 3)
                {
                    no_of_turns = 0;
                    yellowflag = 1;
                    checkbox(3);
                }
                else
                {
                    redflag = 1;
                    another_chance = 1;
                    checkbox(1);
                }
                check_winner_result('r');
            }
        }
        else
        {
            if(dice_return != 6 && no_of_turns < 3)
            {
                no_of_turns = 0;
                greenflag = 1;
                checkbox(2);
            }
            //special case if user got 3 times 6
            else if(no_of_turns == 3)
            {
                no_of_turns = 0;
                greenflag = 1;
                checkbox(2);
            }
            else
            {
                redflag = 1;
                another_chance = 1;
                checkbox(1);
            }
            check_winner_result('r');
        }
    }

    else if(paw_val == 'g')
    {
        if((g1.dice_number-13 == y1.dice_number || g2.dice_number-13 == y1.dice_number ||
            g3.dice_number-13 == y1.dice_number || g4.dice_number-13 == y1.dice_number ) &&
            (y1.dice_number != 0 && y1.dice_number != 6 && y1.dice_number != 19 && y1.dice_number != 27 && y1.dice_number != 32 &&
             y1.dice_number != 14 && y1.dice_number != 40 && y1.dice_number != 45 && y1.dice_number != 53))
        {
            bite(9, 2);
        }
        else if((g1.dice_number-13 == y2.dice_number || g2.dice_number-13 == y2.dice_number ||
            g3.dice_number-13 == y2.dice_number || g4.dice_number-13 == y2.dice_number ) &&
            (y2.dice_number != 0 && y2.dice_number != 6 && y2.dice_number != 19 && y2.dice_number != 27 && y2.dice_number != 32 &&
             y2.dice_number != 14 && y2.dice_number != 40 && y2.dice_number != 45 && y2.dice_number != 53))
        {
            bite(10, 2);
        }
        else if((g1.dice_number-13 == y3.dice_number || g2.dice_number-13 == y3.dice_number ||
            g3.dice_number-13 == y3.dice_number || g4.dice_number-13 == y3.dice_number ) &&
            (y3.dice_number != 0 && y3.dice_number != 6 && y3.dice_number != 19 && y3.dice_number != 27 && y3.dice_number != 32 &&
             y3.dice_number != 14 && y3.dice_number != 40 && y3.dice_number != 45 && y3.dice_number != 53))
        {
            bite(11, 2);
        }
        else if((g1.dice_number-13 == y4.dice_number || g2.dice_number-13 == y4.dice_number ||
            g3.dice_number-13 == y4.dice_number || g4.dice_number-13 == y4.dice_number ) &&
            (y4.dice_number != 0 && y4.dice_number != 6 && y4.dice_number != 19 && y4.dice_number != 27 && y4.dice_number != 32 &&
             y4.dice_number != 14 && y4.dice_number != 40 && y4.dice_number != 45 && y4.dice_number != 53))
        {
            bite(12, 2);
        }
        else if((g1.dice_number-26 == b1.dice_number || g2.dice_number-26 == b1.dice_number ||
            g3.dice_number-26 == b1.dice_number || g4.dice_number-26 == b1.dice_number ) &&
            (b1.dice_number != 0 && b1.dice_number != 6 && b1.dice_number != 19 && b1.dice_number != 27 && b1.dice_number != 32 &&
             b1.dice_number != 14 && b1.dice_number != 40 && b1.dice_number != 45 && b1.dice_number != 53))
        {
            bite(13, 2);
        }
        else if((g1.dice_number-26 == b2.dice_number || g2.dice_number-26 == b2.dice_number ||
            g3.dice_number-26 == b2.dice_number || g4.dice_number-26 == b2.dice_number ) &&
            (b2.dice_number != 0 && b2.dice_number != 6 && b2.dice_number != 19 && b2.dice_number != 27 && b2.dice_number != 32 &&
             b2.dice_number != 14 && b2.dice_number != 40 && b2.dice_number != 45 && b2.dice_number != 53))
        {
            bite(14, 2);
        }
        else if((g1.dice_number-26 == b3.dice_number || g2.dice_number-26 == b3.dice_number ||
            g3.dice_number-26 == b3.dice_number || g4.dice_number-26 == b3.dice_number ) &&
            (b3.dice_number != 0 && b3.dice_number != 6 && b3.dice_number != 19 && b3.dice_number != 27 && b3.dice_number != 32 &&
             b3.dice_number != 14 && b3.dice_number != 40 && b3.dice_number != 45 && b3.dice_number != 53))
        {
            bite(15, 2);
        }
        else if((g1.dice_number-26 == b4.dice_number || g2.dice_number-26 == b4.dice_number ||
            g3.dice_number-26 == b4.dice_number || g4.dice_number-26 == b4.dice_number ) &&
            (b4.dice_number != 0 && b4.dice_number != 6 && b4.dice_number != 19 && b4.dice_number != 27 && b4.dice_number != 32 &&
             b4.dice_number != 14 && b4.dice_number != 40 && b4.dice_number != 45 && b4.dice_number != 53))
        {
            bite(16, 2);
        }
        else if((g1.dice_number  == r1.dice_number -13|| g2.dice_number  == r1.dice_number-13 ||
            g3.dice_number  == r1.dice_number -13|| g4.dice_number  == r1.dice_number-13 ) &&
            (r1.dice_number != 0 && r1.dice_number != 6 && r1.dice_number != 19 && r1.dice_number != 27 && r1.dice_number != 32 &&
             r1.dice_number != 14 && r1.dice_number != 40 && r1.dice_number != 45 && r1.dice_number != 53))
        {
            bite(1, 2);
        }
        else if((g1.dice_number  == r2.dice_number-13 || g2.dice_number  == r2.dice_number-13 ||
            g3.dice_number  == r2.dice_number -13|| g4.dice_number  == r2.dice_number-13 ) &&
            (r2.dice_number != 0 && r2.dice_number != 6 && r2.dice_number != 19 && r2.dice_number != 27 && r2.dice_number != 32 &&
             r2.dice_number != 14 && r2.dice_number != 40 && r2.dice_number != 45 && r2.dice_number != 53))
        {
            bite(2, 2);
        }
        else if((g1.dice_number  == r3.dice_number-13 || g2.dice_number  == r3.dice_number -13||
            g3.dice_number  == r3.dice_number-13 || g4.dice_number  == r3.dice_number-13 ) &&
            (r3.dice_number != 0 && r3.dice_number != 6 && r3.dice_number != 19 && r3.dice_number != 27 && r3.dice_number != 32 &&
             r3.dice_number != 14 && r3.dice_number != 40 && r3.dice_number != 45 && r3.dice_number != 53))
        {
            bite(3, 2);
        }
        else if((g1.dice_number  == r4.dice_number-13 || g2.dice_number  == r4.dice_number -13||
            g3.dice_number  == r4.dice_number-13 || g4.dice_number  == r4.dice_number-13 ) &&
            (r4.dice_number != 0 && r4.dice_number != 6 && r4.dice_number != 19 && r4.dice_number != 27 && r4.dice_number != 32 &&
             r4.dice_number != 14 && r4.dice_number != 40 && r4.dice_number != 45 && r4.dice_number != 53))
        {
            bite(4, 2);
        }
        else if(player_mod == 2)
        {
            if(dice_return != 6 && no_of_turns < 3)
            {
                no_of_turns = 0;
                blueflag = 1;
                checkbox(4);
            }
            //special case if user got 3 times 6
            else if(no_of_turns == 3)
            {
                no_of_turns = 0;
                blueflag = 1;
                checkbox(4);
            }
            else
            {
                greenflag = 1;
                another_chance = 1;
                checkbox(2);
            }
            check_winner_result('g');
        }
        else if(player_mod == 3)
        {
            if(ret_choice_3 == 1)
            {
                //means no blueflag
                if(dice_return != 6 && no_of_turns < 3)
                {
                    no_of_turns = 0;
                    yellowflag = 1;
                    checkbox(3);
                }
                //special case if user got 3 times 6
                else if(no_of_turns == 3)
                {
                    no_of_turns = 0;
                    yellowflag = 1;
                    checkbox(3);
                }
                else
                {
                    greenflag = 1;
                    another_chance = 1;
                    checkbox(2);
                }
                check_winner_result('g');
            }
            else if (ret_choice_3 == 2)

#endif // added by script
