#ifndef _UI_H
#define _UI_H

#include <stdbool.h>

#include "termbox.h"

void init_ui();
void teardown_ui();
void rerender();
void rerender_item(size_t index);
bool ui_tick();
int tb_printf(int x, int y, struct tb_cell *basis, const char *fmt, ...);
void add_loading(int x, int y);

#endif
