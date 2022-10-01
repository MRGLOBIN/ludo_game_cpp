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

#endif // added by script
