/*
** EPITECH PROJECT, 2019
** button.h
** File description:
** button.h
*/

#ifndef BUTTON_H
#define BUTTON_H

#define NB_BUTTON_STATE 3

//#include "sound_t.h"
//#include "help_box_t.h"
#include "button_t.h"

button_t *create_button(sfVector2f pos, sfVector2f scale);

void destroy_button(button_t *button);

void display_button(button_t *button, sfRenderWindow *window);

int set_texture_button(button_t *my_button, const char **filepath);

#endif