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
#endif // PAW_STRUCTURE_H_INCLUDED
