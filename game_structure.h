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

#endif // added by script
