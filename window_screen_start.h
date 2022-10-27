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
#endif // WINDOW_SCREEN_START_H_INCLUDED
