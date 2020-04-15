/*
** EPITECH PROJECT, 2020
** MUL_my_rpg_2019
** File description:
** Created: 2020-03-28T10:16:31+01:00 | Author: simon
*/

#include "my_rpg.h"

extern FUNC_EVENT fct_event[NB_GAME_STATE];

static void event_window_close(game_t *game)
{
    sfRenderWindow_close(game->w.window);
}

static void event_crossroads(game_t *game, sfEvent *event)
{
    if (game->state == QUIT || game->state == ERR) {
        return;
    }
    if (fct_event[game->state] != NULL)
        fct_event[game->state](game, event);
    if (game->sysquest.play_dialogue == true) {
        dialogue_event_manager(game, event);
    }
}

static bool check_quit_event(game_t *game, sfEvent *event)
{
    if (event->type == sfEvtClosed || game->state == QUIT) {
        event_window_close(game);
        return true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyEscape)) {
        event_window_close(game);
        return true;
    }
    return false;
}

void call_event_manager(game_t *game, sfEvent *event)
{
    if (check_quit_event(game, event)) {
        return;
    } else if (sfKeyboard_isKeyPressed(sfKeySpace)) {
        game->state = PAUSE_MENU;
    }
    event_crossroads(game, event);
}
