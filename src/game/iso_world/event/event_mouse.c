/*
** EPITECH PROJECT, 2019
** MUL_my_world_2019
** File description:
** event manager
*/

#include "isow.h"

void event_mouse_button_pressed(isow_t *isow, sfEvent *event)
{
    sfMouseButtonEvent evt = event->mouseButton;

    if (event->mouseButton.button == sfMouseMiddle) {

    } else if (event->mouseButton.button == sfMouseLeft) {

    }
}

void event_mouse_button_released(isow_t *isow, sfEvent *event)
{
    sfMouseButtonEvent evt = event->mouseButton;

    if (evt.button == sfMouseMiddle) {
    } else if (evt.button == sfMouseLeft) {
    }
}

void event_mouse_wheel_scroll(isow_t *isow, sfEvent *event)
{
    sfMouseWheelScrollEvent evt = event->mouseWheelScroll;

    map_scale_all(isow, evt.delta);
}

void event_mouse_move(isow_t *isow, sfEvent *event)
{
    sfMouseMoveEvent evt = event->mouseMove;

    (void)evt;
}