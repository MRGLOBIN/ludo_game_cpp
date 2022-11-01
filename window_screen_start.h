#ifndef WINDOW_SCREEN_START_H_INCLUDED
#define WINDOW_SCREEN_START_H_INCLUDED


//seeding the rand function


void initwindow_800x400()
{
    initwindow(800, 400, "", screenx - 400, screeny - 200);
}

void delevlopers_info()
{
      initwindow_800x400();
      setcolor(WHITE);
      rectangle(50,30,780,380);
      settextstyle(EUROPEAN_FONT,0,4);
      for(int i=180;i>=20;i-=5)
      {
      cleardevice();
      outtextxy(200,i,"Developers Information");
      rectangle(160,i,660,i+40);
      delay(20);
      }
      delay(500);
      setcolor(LIGHTMAGENTA);
      settextstyle(8,0,5);

      outtextxy(300,70,"NAMES");
      delay(600);
      settextstyle(9,0,4);
      setcolor(YELLOW);
      outtextxy(205,130," > Syed Abdul Basit Kazmi");
      delay(500);
      setcolor(LIGHTCYAN);
      outtextxy(205,160," > Muhammad Asim"); delay(500);
      outtextxy(205,190," > Muhammad Ahmed"); delay(500);
      outtextxy(205,220," > Syed Shayan Ali Shah");
      setcolor(WHITE);
      settextstyle(EUROPEAN_FONT,0,2);
      outtextxy(205,365,"Press any key to continue...");

      getch();

      ///first member information////////////////

      setcolor(LIGHTCYAN);
      settextstyle(EUROPEAN_FONT,0,4);
      for(int i=180;i>=20;i-=5)
      {
      cleardevice();
      outtextxy(200,i,"Syed Abdul Basit Kazmi");
      rectangle(160,i,680,i+35);
      delay(20);
      }
      settextstyle(EUROPEAN_FONT,0,2);
      delay(500);
      setcolor(LIGHTBLUE);
      readimagefile("sir.jpeg", 80, 100, 250, 290);
      setcolor(YELLOW);
      settextstyle(9,0,3);
      delay(500); outtextxy(340,90," \"Supervisor\" ");delay(500);setcolor(LIGHTGREEN); outtextxy(270,150,"Institution :");
      outtextxy(270,210,"Designation :");  outtextxy(270,270,"Department :");
      settextstyle(8,0,3);
      setcolor(LIGHTMAGENTA); delay(500);
      outtextxy(430,180,"Air University");
      outtextxy(430,240,"Assistant Professor"); outtextxy(430,290,"Creative Technologies");
      setcolor(WHITE);
      settextstyle(EUROPEAN_FONT,0,2);
      outtextxy(205,365,"Press any key to continue...");
      getch();
      ///////end///////////

      /////second member information////////
      delay(600);

      cleardevice();
      setcolor(LIGHTCYAN);
      settextstyle(EUROPEAN_FONT,0,4);
      for(int i=180;i>=20;i-=5)
      {
      cleardevice();
      outtextxy(200,i,"Muhammed Asim");
      rectangle(160,i,600,i+40);
      delay(20);
      }
      settextstyle(EUROPEAN_FONT,0,2);
      delay(500);
      setcolor(LIGHTBLUE);
      readimagefile(".jpeg", 80, 100, 250, 290);
      setcolor(YELLOW);
      settextstyle(9,0,3); delay(500);
      outtextxy(300,90,"\"PROJECT ARCHITECT\""); setcolor(LIGHTGREEN);outtextxy(270,150,"Institution :");
      outtextxy(270,210,"CT Department:"); outtextxy(270,270,"Program :");
      settextstyle(8,0,3);
      setcolor(LIGHTMAGENTA); delay(500);
      outtextxy(430,180,"Air University");
      outtextxy(430,240,"Fisrt semester Student"); outtextxy(430,290,"BS Software Engineering");
      setcolor(WHITE);
      settextstyle(EUROPEAN_FONT,0,2);
      outtextxy(205,365,"Press any key to continue...");
      getch();
      //////////end/////////

      //////Third Person Information//////////////
      delay(600);
      cleardevice();
      setcolor(LIGHTCYAN);
      settextstyle(EUROPEAN_FONT,0,4);
      for(int i=180;i>=20;i-=5)
      {
      cleardevice();
      outtextxy(200,i,"Muhammad Ahmed");
      rectangle(160,i,650,i+40);
      delay(20);
      }
      settextstyle(EUROPEAN_FONT,0,2);
      delay(500);
      setcolor(LIGHTBLUE);
      rectangle(80,100,250,290);
      readimagefile("ahmed.jpeg", 80, 100, 250, 290);
      setcolor(YELLOW);
      settextstyle(9,0,3); delay(500);
      outtextxy(270,90,"\"PROJECT VISUAL MANAGER\"");setcolor(LIGHTGREEN);  outtextxy(270,150,"Institution :");
      outtextxy(270,210,"CT Department :"); outtextxy(270,270,"Program :");
      settextstyle(8,0,3);
      setcolor(LIGHTMAGENTA);
      delay(500);outtextxy(430,180,"Air University");
      outtextxy(430,240,"Fisrt semester Student"); outtextxy(430,290,"BS Software Engineering");
      setcolor(WHITE);
      settextstyle(EUROPEAN_FONT,0,2);
      outtextxy(205,365,"Press any key to continue...");
      getch();

      //////Fourth Person Information//////////////
      delay(600);
      cleardevice();
      setcolor(LIGHTCYAN);
      settextstyle(EUROPEAN_FONT,0,4);
      for(int i=180;i>=20;i-=5)
      {
      cleardevice();
      outtextxy(200,i,"Syed Shayan ALi Shah");
      rectangle(160,i,650,i+40);
      delay(20);
      }
      settextstyle(EUROPEAN_FONT,0,2);
      delay(500);
      setcolor(LIGHTBLUE);
      readimagefile("shayan.jpeg", 80, 100, 250, 290);
      setcolor(YELLOW);
      settextstyle(9,0,3); delay(500);
      outtextxy(270,90,"\"PROJECT LOGIC MANAGER\""); setcolor(LIGHTGREEN); outtextxy(270,150,"Institution :");
      outtextxy(270,210,"CT Department:"); outtextxy(270,270,"Program :");
      settextstyle(8,0,3);
      setcolor(LIGHTMAGENTA);
      outtextxy(430,180,"Air University");
      outtextxy(430,240,"Fisrt semester Student"); outtextxy(430,290,"BS Software Engineering");
      setcolor(WHITE);
      settextstyle(EUROPEAN_FONT,0,2);
      outtextxy(205,365,"Press any key to continue...");
      getch();
      closegraph(CURRENT_WINDOW);
}


void how_play()
{
    int page1=0;
    int screenx1 = GetSystemMetrics(SM_CXSCREEN) / 2,
    screeny2 = GetSystemMetrics(SM_CYSCREEN) / 2,
    i=0, j=0;
    initwindow(1200, 600, "How To Play", screenx1 - 600, screeny2 - 300);
    line(595, 65, 595, 410);
    line(605, 65, 605, 410);
    line(0, 410, 595, 410);
    line(605, 410, 1200, 410);
    setcolor(YELLOW);
    //How to Play Heading
    settextstyle(6,0,3);
    outtextxy(120,65, "How to Play");
    line(120, 100, 200, 100);
    outtextxy(800,65, "Rules");
    //Content of how to play
    settextstyle(8,0,1);
    outtextxy(40, 120, "-> First Choose The mode you would like to play");
    outtextxy(40, 140, "   on the main menu");
    outtextxy(40, 160, "-> You can choose from 2 players,3 Players, 4 ");
    outtextxy(40, 180, "   Players modes");
    outtextxy(40, 200, "-> If you choose 2 Player or 3 Players mode, you");
    outtextxy(40, 220, "   will be asked to chose which colors you want");
    outtextxy(40, 240, "   to choose and then press start");
    outtextxy(40, 260, "-> If you choose 4 Players the game will start ");
    outtextxy(40, 280, "   automatically ");
    outtextxy(40, 300, "-> The current turn will be displayed in top left");
    outtextxy(40, 320, "   checkbox");
    outtextxy(610, 120, "-> Players take turns in a clockwise order Each ");
    outtextxy(610, 140, "   throw, the player decides which piece to move.");
    outtextxy(610, 160, "-> A piece simply moves in a clockwise direction ");
    outtextxy(610, 180, "   around the track given by the number thrown.");
    outtextxy(610, 200, "-> If no piece can legally move according to the ");
    outtextxy(610, 220, "   number thrown, play passes to the next player.");
    outtextxy(610, 240, "-> A score of 6 is needed to release a pawn from");
    outtextxy(610, 260, "   the starting area.");
    outtextxy(610, 280, "-> If a pawn lands on a square occupied by a ");
    outtextxy(610, 300, "   different colour pawn,the pawn gets eliminated");
    outtextxy(610, 320, "   and is hauled back into its home area.");
    outtextxy(610, 340, "-> A pawn enters the home zone when it completes ");
    outtextxy(610, 360, "   its entire track, i.e. from the starting point");
    outtextxy(610, 380, "   to its respective coloured home area");
    settextstyle(6,0,5);
    outtextxy(250, 440, "Press any key to Continue...");
    outtextxy(610, 420, "");
    getch();
    closegraph(CURRENT_WINDOW);
}


void loadingscreen()
{
    initwindow(1200, 720, "", screenx - 600, screeny - 380);
    int a = 1;
    for(int i = 0; i <= 360*3; i += 15)
    {
        swapbuffers();
        cleardevice();
        setlinestyle(SOLID_LINE, 0, 5);
        setcolor(COLOR(255, 186, 0));
        arc(407, 424, i, 300+i, 94);
        setcolor(COLOR(242, 0, 0));
        setlinestyle(DASHED_LINE, 0, 3);
        arc(407, 424, 5+i, 230+i, 83);
        setcolor(COLOR(158, 0, 59));
        arc(407, 424, i+5, 320+i, 52);
        setcolor(COLOR(243, 266, 255));
        setlinestyle(USERBIT_LINE, 0, 2);
        arc(407, 424, 200-i, 300+i, 78);
        setcolor(COLOR(57 , 181, 74));
        arc(407, 424, 200-i, 300+i, 45);
        setcolor(COLOR(189, 171, 255));
        setlinestyle(SOLID_LINE, 0, 1);
        arc(407, 424, 250-i, 300+i, 61);
        setcolor(COLOR(6, 135, 255));
        arc(407, 424, 150-i, 360-i, 38);
        setlinestyle(SOLID_LINE, 0, 3);
        setcolor(COLOR(0, 29, 38));
        line(509, 435, 915, 435);
        setcolor(COLOR(0, 118, 171));
        arc(407, 424, 354, 284, 103);
        line(433, 523, 442, 552);
        line(509, 435, 630+a, 435);
        setlinestyle(USERBIT_LINE,0, 13);
        setcolor(COLOR(0, 29, 38));
        arc(407, 424, 8, 285, 116);
        setcolor(COLOR(0 ,200, 255));
        arc(407, 424, 0, a, 116);
        a += 4;
        if(i % 8 == 0)
        {
            setcolor(COLOR(236, 28, 28));
        }
        else if(i % 8 == 1)
        {
            setcolor(COLOR(255, 63, 63));
        }
        else if(i % 8 == 2)
        {
            setcolor(COLOR(255, 0, 0));
        }
        else if(i % 8 == 4)
        {
            setcolor(COLOR(211, 7, 7));
        }
        else if(i % 8 == 5)
        {
            setcolor(COLOR(178, 0, 0));
        }
        else if(i % 8 == 6)
        {
            setcolor(COLOR(145, 0, 0));
        }
        else if(i % 8 == 7)
        {
            setcolor(COLOR(105, 28, 28));
        }
        settextstyle(8, 0, 3);
        outtextxy(567, 408, "LOADING, PLEASE WAIT!");
        setcolor(COLOR(0, 229, 32));
        settextstyle(8, 0, 6);
        outtextxy(391, 398, "G");
        PlaySound(TEXT("dice.wav"), NULL, SND_ASYNC);
        delay(50);
    }
    closegraph();
}

void paw_start_interface(int x, int y,int color)
{
        setlinestyle(SOLID_LINE, 1, 1);
        setcolor(color);
        setfillstyle(SOLID_FILL, color);
#endif // WINDOW_SCREEN_START_H_INCLUDED
