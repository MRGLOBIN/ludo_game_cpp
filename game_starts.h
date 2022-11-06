#ifndef GAME_STARTS_H_INCLUDED
#define GAME_STARTS_H_INCLUDED


void start_game()
{
    loadingscreen();
    initwindow(1200, 720, "LUDO GAME", screenx - 600, screeny - 380);
    main_window = getcurrentwindow();
    PlaySound(0, 0, 0);
    PlaySound("dota.wav", NULL, SND_LOOP | SND_ASYNC);
    while(win)
#endif // GAME_STARTS_H_INCLUDED
