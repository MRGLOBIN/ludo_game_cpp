#ifndef PAW_STRUCTURE_H_INCLUDED
#define PAW_STRUCTURE_H_INCLUDED

struct redcolorpawn
{
  int dice_number = 0, flag = 0, x, y;
  void display(int paw_no)
  {
      if (dice_number == 0 && paw_no == 1)
      {
          x = 115, y = 115;
      }
      else if (dice_number == 0 && paw_no == 2)
      {
          x = 233, y = 115;
      }
      else if (dice_number == 0 && paw_no == 3)
      {
          x = 115, y = 200;
      }
      else if (dice_number == 0 && paw_no == 4)
      {
          x = 233, y = 200;
      }
      else if (dice_number == 6)
      {
          x = 100, y = 315;
      }
      else if (dice_number == 7)
      {
          x = 153, y = 315;
      }
      else if (dice_number == 8)
      {
          x = 206, y = 315;
      }
      else if (dice_number == 9)
      {
          x = 259, y = 315;
      }
      else if (dice_number == 10)
      {
          x = 312, y = 315;
      }
      else if (dice_number == 11)
      {
          x = 365, y = 270;
      }
      else if (dice_number == 12)
      {
          x = 365, y = 225;
      }
      else if (dice_number == 13)
      {
          x = 365, y = 180;
      }
      else if (dice_number == 14)
      {
          x = 365, y = 135;
      }
      else if (dice_number == 15)
      {
          x = 365, y = 90;
      }
      else if (dice_number == 16)
      {
          x = 365, y = 45;
      }
      else if (dice_number == 17)
      {
          x = 418, y = 45;
      }
      else if (dice_number == 18)
      {
          x = 471, y = 45;
      }
      else if (dice_number == 19)
      {
          x = 471, y = 90;
      }
      else if (dice_number == 20)
      {
          x = 471, y = 135;
      }
      else if (dice_number == 21)
      {
          x = 471, y = 180;
      }
      else if (dice_number == 22)
      {
          x = 471, y = 225;
      }
      else if (dice_number == 23)
      {
          x = 471, y = 270;
      }
      else if (dice_number == 24)
      {
          x = 524, y = 315;
      }
      else if (dice_number == 25)
      {
          x = 577, y = 315;
      }
      else if (dice_number == 26)
      {
          x = 630, y = 315;
      }
      else if (dice_number == 27)
      {
          x = 683, y = 315;
      }
      else if (dice_number == 28)
      {
          x = 736, y = 315;
      }
      else if (dice_number == 29)
      {
          x = 789, y = 315;
      }
      else if (dice_number == 30)
      {
          x = 789, y = 360;
      }
      else if (dice_number == 31)
      {
          x = 789, y = 405;
      }
      else if (dice_number == 32)
      {
          x = 736, y = 405;
      }
      else if (dice_number == 33)
      {
          x = 683, y = 405;
      }
      else if (dice_number == 34)
      {
          x = 630, y = 405;
      }
      else if (dice_number == 35)
      {
          x = 577, y = 405;
      }
      else if (dice_number == 36)
      {
          x = 524, y = 405;
      }
      else if (dice_number == 37)
      {
          x = 471, y = 450;
      }
      else if (dice_number == 38)
      {
          x = 471, y = 495;
      }
      else if (dice_number == 39)
      {
          x = 471, y = 540;
      }
      else if (dice_number == 40)
      {
          x = 471, y = 585;
      }
      else if (dice_number == 41)
      {
          x = 471, y = 630;
      }
      else if (dice_number == 42)
      {
          x = 471, y = 675;
      }
      else if (dice_number == 43)
      {
          x = 418, y = 675;
      }
      else if (dice_number == 44)
      {
          x = 365, y = 675;
      }
      else if (dice_number == 45)
      {
          x = 365, y = 630;
      }
      else if (dice_number == 46)
      {
          x = 365, y = 585;
      }
      else if (dice_number == 47)
      {
          x = 365, y = 540;
      }
      else if (dice_number == 48)
      {
          x = 365, y = 495;
      }
      else if (dice_number == 49)
      {
          x = 365, y = 450;
      }
      else if (dice_number == 50)
      {
          x = 312, y = 405;
      }
      else if (dice_number == 51)
      {
          x = 259, y = 405;
      }
      else if (dice_number == 52)
      {
          x = 206, y = 405;
      }
      else if (dice_number == 53)
      {
          x = 153, y = 405;
      }
      else if (dice_number == 54)
      {
          x = 100, y = 405;
      }
      else if (dice_number == 55)
      {
          x = 47, y = 405;
      }
      else if (dice_number == 56)
      {
          x = 47, y = 360;
      }
      else if (dice_number == 57)
      {
          x = 100, y = 360;
      }
      else if (dice_number == 58)
      {
          x = 153, y = 360;
      }
      else if (dice_number == 59)
      {
          x = 206, y = 360;
      }
      else if (dice_number == 60)
      {
          x = 259, y = 360;
      }
      else if (dice_number == 61)
      {
          x = 312, y = 360;
      }
      else if (dice_number == 62 && paw_no == 1)
      {
          x = 365, y = 360;
      }
      else if (dice_number == 62 && paw_no == 2)
      {
          x = 365, y = 360;
      }
      else if (dice_number == 62 && paw_no == 3)
      {
          x = 365, y = 360;
      }
      else if (dice_number == 62 && paw_no == 4)
      {
          x = 365, y = 360;
      }
      setcolor(BLACK);
      setfillstyle(SOLID_FILL, COLOR(200, 40, 0));
      fillellipse(x, y, 18, 18);
      setcolor(12);
      circle(x, y, 15);
      circle(x, y, 10);

  }
};

struct greencolorpaw
{
  int dice_number = 0,flag = 0, x, y;
  void display(int paw_no)
  {
      if (dice_number == 0 && paw_no == 1)
      {
          x = 595, y = 115;
      }
      else if (dice_number == 0 && paw_no == 2)
      {
          x = 713, y = 115;
      }
      else if (dice_number == 0 && paw_no == 3)
      {
          x = 595, y = 200;
      }
      else if (dice_number == 0 && paw_no == 4)
      {
          x = 713, y = 200;
      }
      else if (dice_number == 6)
      {
          x = 471, y = 90;
      }
      else if (dice_number == 7)
      {
          x = 471, y = 135;
      }
      else if (dice_number == 8)
      {
          x = 471, y = 180;
      }
      else if (dice_number == 9)
      {
          x = 471, y = 225;
      }
      else if (dice_number == 10)
      {
          x = 471, y = 270;
      }
      else if (dice_number == 11)
      {
          x = 524, y = 315;
      }
      else if (dice_number == 12)
      {
          x = 577, y = 315;
      }
      else if (dice_number == 13)
      {
          x = 630, y = 315;
      }
      else if (dice_number == 14)
      {
          x = 683, y = 315;
      }
      else if (dice_number == 15)
      {
          x = 736, y = 315;
      }
      else if (dice_number == 16)
      {
          x = 789, y = 315;
      }
      else if (dice_number == 17)
      {
          x = 789, y = 360;
      }
      else if (dice_number == 18)
      {
          x = 789, y = 405;
      }
      else if (dice_number == 19)
      {
          x = 736, y = 405;
      }
      else if (dice_number == 20)
      {
          x = 683, y = 405;
      }
      else if (dice_number == 21)
      {
          x = 630, y = 405;
      }
      else if (dice_number == 22)
      {
          x = 577, y = 405;
      }
      else if (dice_number == 23)
      {
          x = 524, y = 405;
      }
      else if (dice_number == 24)
      {
          x = 471, y = 450;
      }
      else if (dice_number == 25)
      {
          x = 471, y = 495;
      }
      else if (dice_number == 26)
      {
          x = 471, y = 540;
      }
      else if (dice_number == 27)
      {
          x = 471, y = 585;
      }
      else if (dice_number == 28)
      {
          x = 471, y = 630;
      }
      else if (dice_number == 29)
      {
          x = 471, y = 675;
      }
      else if (dice_number == 30)
      {
          x = 418, y = 675;
      }
      else if (dice_number == 31)
      {
          x = 365, y = 675;
      }
      else if (dice_number == 32)
      {
          x = 365, y = 630;
      }
      else if (dice_number == 33)
      {
          x = 365, y = 585;
      }
      else if (dice_number == 34)
      {
          x = 365, y = 540;
      }
      else if (dice_number == 35)
      {
          x = 365, y = 495;
      }
      else if (dice_number == 36)
      {
          x = 365, y = 450;
      }
      else if (dice_number == 37)
      {
          x = 312, y = 405;
      }
      else if (dice_number == 38)
      {
          x = 259, y = 405;
      }
      else if (dice_number == 39)
      {
          x = 206, y = 405;
      }
      else if (dice_number == 40)
      {
          x = 153, y = 405;
      }
      else if (dice_number == 41)
      {
          x = 100, y = 405;
      }
      else if (dice_number == 42)
      {
          x = 47, y = 405;
      }
      else if (dice_number == 43)
      {
          x = 47, y = 360;
      }
      else if (dice_number == 44)
      {
          x = 47, y = 315;
      }
      else if (dice_number == 45)
      {
          x = 100, y = 315;
      }
      else if (dice_number == 46)
      {
          x = 153, y = 315;
      }
      else if (dice_number == 47)
      {
          x = 206, y = 315;
      }
      else if (dice_number == 48)
      {
          x = 259, y = 315;
      }
      else if (dice_number == 49)
      {
          x = 312, y = 315;
      }
      else if (dice_number == 50)
      {
          x = 365, y = 270;
      }
      else if (dice_number == 51)
      {
          x = 365, y = 225;
      }
      else if (dice_number == 52)
      {
          x = 365, y = 180;
      }
      else if (dice_number == 53)
      {
          x = 365, y = 135;
      }
      else if (dice_number == 54)
      {
          x = 365, y = 90;
      }
      else if (dice_number == 55)
      {
          x = 365, y = 45;
      }
      else if (dice_number == 56)
      {
          x = 418, y = 45;
      }
      else if (dice_number == 57)
      {
          x = 418, y = 90;
      }
      else if (dice_number == 58)
      {
          x = 418, y = 135;
      }
      else if (dice_number == 59)
      {
          x = 418, y = 180;
      }
      else if (dice_number == 60)
      {
          x = 418, y = 225;
      }
      else if (dice_number == 61)
      {
          x = 418, y = 270;
      }
      else if (dice_number == 62 && paw_no == 1)
      {
          x = 418, y = 315;
      }
      else if (dice_number == 62 && paw_no == 2)
      {
          x = 418, y = 315;
      }
      else if (dice_number == 62 && paw_no == 3)
      {
          x = 418, y = 315;
      }
      else if (dice_number == 62 && paw_no == 4)
      {
          x = 418, y = 315;
      }
      setcolor(BLACK);
      setfillstyle(SOLID_FILL, GREEN);
      fillellipse(x, y, 18, 18);
      setcolor(11);
      circle(x, y, 15);
      circle(x, y, 10);

#endif // PAW_STRUCTURE_H_INCLUDED
