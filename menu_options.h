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
    int choice = 0;
    while(TRUE)
    {
        cleardevice();
        setcolor(BLUE);
        settextstyle(10, 4, 0);
        outtextxy(550, 100, "Select your choice!");
        //well setting the red paw
        //x = 170, y = 200, color = red
        paw_start_interface(170, 200, RED);
        //the versus text
        outtextxy(255, 215, "vs");
        //here i set the yellow paw
        //x = 295, y = 200, color = yellow
        paw_start_interface(295, 200, YELLOW);
        //here comes the line separator
        setlinestyle(SOLID_LINE, 1, 3);
        line(390, 120, 390, 290);
        //now here comes the other two paws
            //well setting the blue paw
        //x = 470, y = 200, color blue
        paw_start_interface(470, 200, BLUE);
        //the versus text
        outtextxy(556, 215, "vs");
        //here i set the green paw
        //x = 600, 200, green
        paw_start_interface(600, 200, GREEN);
        //now inventing the mouse
        //first get the rectangle coordinates
        //choice 1 coordinates
        //rectangle(120, 120, 345, 270);
        //getting choice coordinates
        //rectangle(422, 120, 650, 270);
        //now stating the mouse conditions
        if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 120 && mousey() >= 120 && mousex() <= 345 && mousey() <= 270)
        {
            choice = 1;
        }
        else if (ismouseclick(WM_LBUTTONDOWN) && mousex() >= 422 && mousey() >= 120 && mousex() <= 650 && mousey() <= 270)
        {
            choice = 2;
        }
        setlinestyle(0, 1, 2);
        //setting color values for start and end values
        setcolor(COLOR(0, 200, 255));
        setbkcolor(RED);
        settextstyle(1, 0, 1);
        //making choice now
        if (choice == 1)
        {
            rectangle(120, 120, 345, 270);
            outtextxy(780, 370, "START");

        }
        else if (choice == 2)
        {
            rectangle(422, 120, 650, 270);
            outtextxy(780, 370, "START");
        }
        //getting start button coordinates
        //rectangle(680, 350, 780, 370);
        //now set the mouse for it
        if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 680 && mousey() >= 350 && mousex() <= 780 && mousey() <= 370)
        {
            if(choice == 1)
                return 1;
            else if (choice == 2)
                return 2;
        }
        //making back button
        outtextxy(100, 370, "Back");
        //now makeing it mouse sensitive
        //but first finding its coordinates
        //rectangle(35, 350, 105, 370);
        if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 35 && mousey() >= 350 && mousex() <= 105 && mousey() <= 370)
        {
            return 3;
        }
        //setting things to default
        setbkcolor(BLACK);
        clearmouseclick(WM_LBUTTONDOWN);
        delay(75);
        swapbuffers();
    }

}


int player_win3()
{
    initwindow_800x400();
    choice3_1= 0; int a=5;
    choice3_2= 0;
    choice3_3= 0;
    choice3_4= 0;
    clearmouseclick(WM_LBUTTONDOWN);
    while(a)
    {
        cleardevice();
        setcolor(COLOR(0, 200, 255));

        setcolor(BLUE);
        settextstyle(10, 4, 0);
        outtextxy(650, 130, "Player 1 Select your choice!");
        setcolor(WHITE);
        //line(100,140,700,140);
        //line(100,630,700,630);
        rectangle(100,140,715,330);
        setfillstyle(SOLID_FILL, RED);
        fillellipse(180,240,65, 65);
        setfillstyle(SOLID_FILL, YELLOW);
        fillellipse(330,240,65, 65);
        setfillstyle(SOLID_FILL, BLUE);
        fillellipse(480,240,65, 65);
        setfillstyle(SOLID_FILL, GREEN);
        fillellipse(630,240,65, 65);
        //Pan over red

        if(mousex() >= 110 && mousey() >= 150 && mousex() <= 255 && mousey() <= 320)
        {
            setcolor(RED);
            rectangle(110,150,255,320);
        }
        //pan over yellow

        else if(mousex() >= 260 && mousey() >= 150 && mousex() <= 405 && mousey() <= 320)
        {
            setcolor(YELLOW);
            rectangle(260,150,405,320);
        }
        //pan over green
        else if(mousex() >= 410 && mousey() >= 150 && mousex() <= 555 && mousey() <= 320)
        {
            setcolor(BLUE);
            rectangle(410,150,555,320);
        }
        //pan over green

        else if(mousex() >= 560 && mousey() >= 150 && mousex() <= 705 && mousey() <= 320)
        {
            setcolor(GREEN);
        	rectangle(560,150,705,320);
        }
        //clicks
        //CLick over red

        if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 110 && mousey() >= 150 && mousex() <= 255 && mousey() <= 320)
			{
			choice3_1= 1;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
			}

        //CLick over yellow

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 260 && mousey() >= 150 && mousex() <= 405 && mousey() <= 320)
		{
			choice3_1= 2;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //CLick over green

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 410 && mousey() >= 150 && mousex() <= 555 && mousey() <= 320)
        {
			choice3_1= 3;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //click over green

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 560 && mousey() >= 150 && mousex() <= 705 && mousey() <= 320)
        {
			choice3_1 = 4;
            clearmouseclick(WM_LBUTTONDOWN);
			a=0;
		}
            swapbuffers();
    }
    cleardevice();
    closegraph();
        initwindow(800, 400, "", screenx - 400, screeny - 200);

        //player 2 choice
        setbkcolor(BLACK);
        char b;
        clearmouseclick(WM_LBUTTONDOWN);
        a=1;
        while(a)
    {
        cleardevice();
        setcolor(BLUE);
        settextstyle(10, 4, 0);
        outtextxy(650, 130, "Player 2 Select your choice!");
        setcolor(WHITE);
        rectangle(120,140,676,330);
        circle(220,240,65);
        circle(400,240,65);
        circle(580,240,65);

        if(choice3_1==1)
        {
            setfillstyle(SOLID_FILL, YELLOW);
            floodfill(220,240,WHITE);
            setfillstyle(SOLID_FILL, BLUE);
            floodfill(400,240,WHITE);
            setfillstyle(SOLID_FILL, GREEN);
            floodfill(520,240,WHITE);

            if(mousex() >= 120 && mousey() >= 150 && mousex() <= 350 && mousey() <= 320)
        {
            setcolor(YELLOW);
            rectangle(145,155,295,315);
        }
        //pan over yellow

        else if(mousex() >= 320 && mousey() >= 150 && mousex() <= 480 && mousey() <= 320)
        {
            setcolor(BLUE);
            rectangle(320,155,480,315);
        }
        //pan over green
        else if(mousex() >= 485 && mousey() >= 150 && mousex() <= 645 && mousey() <= 320)
        {
            setcolor(GREEN);
            rectangle(495,155,665,315);
        }
        //pan over green
        //clicks
        //CLick over red

        if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 120 && mousey() >= 150 && mousex() <= 350 && mousey() <= 320)
			{
			choice3_2= 1;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
			}

        //CLick over yellow

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 320 && mousey() >= 150 && mousex() <= 480 && mousey() <= 320)
		{
			choice3_2= 2;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //CLick over green

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 485 && mousey() >= 150 && mousex() <= 645 && mousey() <= 320)
        {
			choice3_2= 3;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //click over green



        }
        else if(choice3_1==2)
        {
            setfillstyle(SOLID_FILL, RED);
            floodfill(220,240,WHITE);
            setfillstyle(SOLID_FILL, BLUE);
            floodfill(400,240,WHITE);
            setfillstyle(SOLID_FILL, GREEN);
            floodfill(520,240,WHITE);

            if(mousex() >= 120 && mousey() >= 150 && mousex() <= 350 && mousey() <= 320)
        {
            setcolor(RED);
            rectangle(145,155,295,315);
        }
        //pan over yellow

        else if(mousex() >= 320 && mousey() >= 150 && mousex() <= 480 && mousey() <= 320)
        {
            setcolor(BLUE);
            rectangle(320,155,480,315);
        }
        //pan over green
        else if(mousex() >= 485 && mousey() >= 150 && mousex() <= 645 && mousey() <= 320)
        {
            setcolor(GREEN);
            rectangle(495,155,665,315);
        }
        //pan over green
        //clicks
        //CLick over red

        if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 120 && mousey() >= 150 && mousex() <= 350 && mousey() <= 320)
			{
			choice3_2= 1;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
			}

        //CLick over yellow

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 320 && mousey() >= 150 && mousex() <= 480 && mousey() <= 320)
		{
			choice3_2= 2;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //CLick over green

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 485 && mousey() >= 150 && mousex() <= 645 && mousey() <= 320)
        {
			choice3_2= 3;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //click over green



        }
        else if(choice3_1==3)
        {
            setfillstyle(SOLID_FILL, RED);
            floodfill(220,240,WHITE);
            setfillstyle(SOLID_FILL, YELLOW);
            floodfill(400,240,WHITE);
            setfillstyle(SOLID_FILL, GREEN);
            floodfill(520,240,WHITE);

            if(mousex() >= 120 && mousey() >= 150 && mousex() <= 350 && mousey() <= 320)
        {
            setcolor(RED);
            rectangle(145,155,295,315);
        }
        //pan over yellow

        else if(mousex() >= 320 && mousey() >= 150 && mousex() <= 480 && mousey() <= 320)
        {
            setcolor(YELLOW);
            rectangle(320,155,480,315);
        }
        //pan over green
        else if(mousex() >= 485 && mousey() >= 150 && mousex() <= 645 && mousey() <= 320)
        {
            setcolor(GREEN);
            rectangle(495,155,665,315);
        }
        //pan over green
        //clicks
        //CLick over red

        if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 120 && mousey() >= 150 && mousex() <= 350 && mousey() <= 320)
			{
			choice3_2= 1;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
			}

        //CLick over yellow

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 320 && mousey() >= 150 && mousex() <= 480 && mousey() <= 320)
		{
			choice3_2= 2;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //CLick over green

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 485 && mousey() >= 150 && mousex() <= 645 && mousey() <= 320)
        {
			choice3_2= 3;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //click over green



        }
        else if(choice3_1==4)
        {
            setfillstyle(SOLID_FILL, RED);
            floodfill(220,240,WHITE);
            setfillstyle(SOLID_FILL, YELLOW);
            floodfill(400,240,WHITE);
            setfillstyle(SOLID_FILL, BLUE);
            floodfill(520,240,WHITE);

            if(mousex() >= 120 && mousey() >= 150 && mousex() <= 350 && mousey() <= 320)
        {
            setcolor(RED);
            rectangle(145,155,295,315);
        }
        //pan over yellow

        else if(mousex() >= 320 && mousey() >= 150 && mousex() <= 480 && mousey() <= 320)
        {
            setcolor(YELLOW);
            rectangle(320,155,480,315);
        }
        //pan over green
        else if(mousex() >= 485 && mousey() >= 150 && mousex() <= 645 && mousey() <= 320)
        {
            setcolor(BLUE);
            rectangle(495,155,665,315);
        }
        //pan over green
        //clicks
        //CLick over red

        if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 120 && mousey() >= 150 && mousex() <= 350 && mousey() <= 320)
			{
			choice3_2= 1;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
			}

        //CLick over yellow

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 320 && mousey() >= 150 && mousex() <= 480 && mousey() <= 320)
		{
			choice3_2= 2;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //CLick over green

        else if(ismouseclick(WM_LBUTTONDOWN) && mousex() >= 485 && mousey() >= 150 && mousex() <= 645 && mousey() <= 320)
        {
			choice3_2= 3;
            clearmouseclick(WM_LBUTTONDOWN); a=0;
		}

        //click over green
        }
        //Pan over red

        if(mousex() >= 120 && mousey() >= 150 && mousex() <= 350 && mousey() <= 320)
        {
            setcolor(RED);
            rectangle(145,155,295,315);
        }
        //pan over yellow

        else if(mousex() >= 320 && mousey() >= 150 && mousex() <= 480 && mousey() <= 320)
        {
            setcolor(YELLOW);
            rectangle(320,155,480,315);
        }
        //pan over green
        else if(mousex() >= 485 && mousey() >= 150 && mousex() <= 645 && mousey() <= 320)
        {
            setcolor(BLUE);
            rectangle(495,155,665,315);
        }
        //pan over green
        //clicks
        //CLick over red

#endif // MENU_OPTIONS_H_INCLUDED
