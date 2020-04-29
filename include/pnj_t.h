/*
** EPITECH PROJECT, 2020
** my_rpg
** File description:
** my_rpg
*/

#ifndef PNJ_T_H_
#define PNJ_T_H_

#include <stdbool.h>
#include <SFML/Graphics.h>

typedef struct pnj_s
{
    chara_animation_t move;
    sfVector2i pos;
    sfClock *clock;
    sfVector2i fpos;
    bool go_act;
} pnj_t;

typedef struct pnj_manage_s
{
    pnj_t *all_pnj;
    size_t nb_pnj;
} pnj_manage_t;

#endif
