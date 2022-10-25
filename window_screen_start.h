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
#endif // WINDOW_SCREEN_START_H_INCLUDED
